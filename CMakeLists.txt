cmake_minimum_required(VERSION 2.8)

set(target "app")
project(${target})

set(EXECUTABLE_OUTPUT_PATH "bin")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
include_directories("include")

add_executable( ${target} 
	src/rational.cpp
)
