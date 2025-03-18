
# Use vcpkg toolchain
set(CMAKE_TOOLCHAIN_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

# Minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(ngit VERSION 1.0.0)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Define source and header directories
set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")

# Collect all source files
file(GLOB_RECURSE SRC_FILES "${SRC_DIR}/*.cpp")

# Define executable
add_executable(gitn ${SRC_FILES})

# Include directories
target_include_directories(gitn PRIVATE ${INCLUDE_DIR})

# Find and link zlib
find_package(ZLIB REQUIRED)
target_link_libraries(gitn PRIVATE ZLIB::ZLIB)

# Find and link OpenSSL
find_package(OpenSSL REQUIRED)
target_link_libraries(gitn PRIVATE OpenSSL::SSL OpenSSL::Crypto)

