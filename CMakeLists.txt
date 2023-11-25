cmake_minimum_required(VERSION 3.26)
project(valgo)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

cmake_policy(SET CMP0135 NEW)

file(GLOB_RECURSE SOURCE
        "${CMAKE_SOURCE_DIR}/src/*.cpp"
        "${CMAKE_SOURCE_DIR}/src/*.hpp"
        "${CMAKE_SOURCE_DIR}/src/*.h"
)

add_executable(valgo
        ${SOURCE}
        "${CMAKE_SOURCE_DIR}/src/parser/AST.h"
        "${CMAKE_SOURCE_DIR}/src/parser/AST.cpp"
        "${CMAKE_SOURCE_DIR}/src/parser/ASTBuilderVisitor.h"
        "${CMAKE_SOURCE_DIR}/src/parser/ASTBuilderVisitor.cpp"
)

add_subdirectory(antlr4-runtime)

target_link_libraries(valgo
        antlr4-runtime
)

target_include_directories(valgo
        PUBLIC antlr4-runtime/runtime/src
)
