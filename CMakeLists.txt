cmake_minimum_required(VERSION 3.6)   # CMake version check
project(algorithm)               # Create project "algorithm"
set(CMAKE_CXX_STANDARD 11)            # Enable c++11 standard

set(Boost_INCLUDE_DIR /Users/bartowski/project/boost_1_66_0)
include_directories(${Boost_INCLUDE_DIR})

set(SOURCE_FILES main/main.cpp)            # Add main.cpp file of project root directory as source file
add_executable(algorithm ${SOURCE_FILES})       # Add executable target with source files listed in SOURCE_FILES variable
