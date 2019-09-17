# CMakeList.txt : CMake project for tmp-introduction-to-algorithms-in-cpp, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(algorithms)

set(BASEPATH "${CMAKE_SOURCE_DIR}")
include_directories("${BASEPATH}")

# Add source to this project's executable.
add_subdirectory(sorting)
add_subdirectory(misc)

# TODO: Add tests and install targets if needed.
