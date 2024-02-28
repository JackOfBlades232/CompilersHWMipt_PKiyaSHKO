cmake_minimum_required(VERSION 3.0)
project(Compilers)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${Compilers_SOURCE_DIR}/bin)

add_subdirectory(scanner)

add_executable(Compilers main.cpp)
target_include_directories(Compilers PRIVATE ${Compilers_SOURCE_DIR}/scanner)
