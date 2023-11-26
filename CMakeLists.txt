cmake_minimum_required(VERSION 3.20)
project(Valgo LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)

find_package(antlr4-generator REQUIRED)
find_package(antlr4-runtime REQUIRED)

# set up the command to be run for building the files in the for the `antlr_generate` target
antlr4_generate(
    generated
    "${CMAKE_SOURCE_DIR}/src/grammar/Valgo.g4"
    BOTH # both lexer and parser
    ON # listener
    ON # visitor
)

# Target: antlr_generate
# For running the ANTLR4 JAR and generating the lexer, parser, listener, and visitor sources
add_custom_target(antlr_generate
    ALL
    DEPENDS "${CMAKE_SOURCE_DIR}/src/grammar/Valgo.g4" ${ANTLR4_SRC_FILES_generated}
)

# Target: parser
add_library(parser
    ${ANTLR4_SRC_FILES_generated}
    src/parser/AST.h
    src/parser/AST.cpp
    src/parser/ASTBuilderVisitor.h
    src/parser/ASTBuilderVisitor.cpp
)
add_dependencies(parser antlr_generate)
target_include_directories(parser
    PUBLIC
        ${ANTLR4_INCLUDE_DIR}
        ${ANTLR4_INCLUDE_DIR_generated}
)
target_link_libraries(parser PUBLIC antlr4_static)

# Target: codegen
add_library(codegen
    src/codegen/codegen.cpp
)
target_link_libraries(codegen PUBLIC parser)
add_dependencies(codegen parser)
target_include_directories(codegen
    PUBLIC
        src/parser
)

# Target: parser_test
add_executable(parser_test test/test_parser.cpp)
target_link_libraries(parser_test PRIVATE parser)
add_custom_command(
    TARGET parser_test
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy "${CMAKE_SOURCE_DIR}/test/example_program.valgo"
        "${CMAKE_CURRENT_BINARY_DIR}/example_program.valgo"
)
