cmake_minimum_required (VERSION 2.8.12.2)

# Change project name to desired name
project (Test_Assignment)

set(CMAKE_CXX_FLAGS "-std=c++11 -g -Wall")
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/bin")

# include directory for headers
include_directories(include)

file(GLOB SOURCES "src/*.cpp")

# Change name of executable to desired name
add_executable(powerteam ${SOURCES})
