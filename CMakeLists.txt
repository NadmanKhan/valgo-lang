cmake_minimum_required(VERSION 3.20)
project(Valgo LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)


find_package(antlr4-generator REQUIRED)
find_package(antlr4-runtime REQUIRED)


# define the command to be run for building the files in the ANTLR4_SRC_FILES_valgo list
antlr4_generate(valgo "${CMAKE_SOURCE_DIR}/src/grammar/Valgo.g4" BOTH LISTENER VISITOR)

# Target: grammar
# For running the ANTLR4 JAR and generating the lexer, parser, listener, and visitor sources
add_custom_target(grammar
    ALL
    DEPENDS "${CMAKE_SOURCE_DIR}/src/grammar/Valgo.g4" ${ANTLR4_SRC_FILES_valgo}
)


list(REMOVE_AT ANTLR4_SRC_FILES_valgo 0 1) # remove Valgo.tokens and Valgo.interp

# Target: parser
add_library(parser
    ${ANTLR4_SRC_FILES_valgo}
    src/parser/AST.h
    src/parser/AST.cpp
    src/parser/ASTBuilderVisitor.h
    src/parser/ASTBuilderVisitor.cpp
)
add_dependencies(parser grammar)
target_include_directories(parser PUBLIC ${ANTLR4_INCLUDE_DIR} ${ANTLR4_INCLUDE_DIR_valgo})
target_link_libraries(parser PRIVATE antlr4-runtime)


# Target: parser_test
add_executable(parser_test test/test_parser.cpp)
target_link_libraries(parser_test PRIVATE parser)
add_custom_command(
    TARGET parser_test
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy "${CMAKE_SOURCE_DIR}/test/example_program.valgo"
        "${CMAKE_CURRENT_BINARY_DIR}/example_program.valgo"
)
