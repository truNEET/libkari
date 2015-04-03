cmake_minimum_required (VERSION 2.8)
project (libkari)

set (OUTPUT "kari")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

if (WIN32)
	set (PLAT_LIBS "##")
else()
	set (PLAT_LIBS "${CMAKE_CURRENT_SOURCE_DIR}/lib/linux/liblua.a")
endif()

include_directories (
	include/
)

add_library (${OUTPUT} STATIC
	src/service.cpp
	src/rectangle.cpp
	src/core.cpp
)

target_link_libraries (${OUTPUT}
	${PLAT_LIBS}	
)
