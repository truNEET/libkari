cmake_minimum_required (VERSION 2.8)
project (libkari)

set (OUTPUT "kari")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories (
	include/
)

add_library (${OUTPUT} SHARED
	src/service.cpp
	src/luabridge.cpp
	src/rectangle.cpp
	src/core.cpp
)

target_link_libraries (${OUTPUT}
	lua
)
