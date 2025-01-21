# Minimum cmake version
cmake_minimum_required(VERSION 3.10)

# project name
project(ngit VERSION 1.0.0)

# Set the C++ Standards
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Define source and headerr directories
set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")

# collect all source files
file(GLOB_RECURSE SRC_FILES "${SRC_DIR}/*.cpp")

# define executable
add_executable(gitn ${SRC_FILES})

target_include_directories(gitn PRIVATE ${INCLUDE_DIR})
