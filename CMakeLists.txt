cmake_minimum_required (VERSION 2.8)
project (libkari)

set (OUTPUT "kari")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories (
	include/
)

add_library (${OUTPUT} SHARED
	src/core.cpp
	src/rectangle.cpp
)

target_link_libraries (${OUTPUT}
	lua
)
