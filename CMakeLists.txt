cmake_minimum_required(VERSION 3.0.0)
project(algorithms)

set(BASEPATH "${CMAKE_SOURCE_DIR}")
include_directories("${BASEPATH}")

add_subdirectory(sorting/insertion-sort)
