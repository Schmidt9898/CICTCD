
cmake_minimum_required(VERSION 3.16)
# set(CMAKE_CXX_COMPILER g++) does not work

project(LCompileTest VERSION 0.0.2
					 DESCRIPTION "I trying my best"
					 LANGUAGES CXX)	


if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Release CACHE STRING "" FORCE )
endif()
#message("Hi")
message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")

add_library(cxx_project INTERFACE)
#target_compile_options(cxx_project INTERFACE -Wall )#-Wpedantic -Wextra)
target_include_directories(cxx_project INTERFACE ${PROJECT_SOURCE_DIR})


include(cmake/UpdateSubmodules.cmake)
include(CTest)

add_subdirectory(source)
add_subdirectory(tests)
add_subdirectory(tools)
add_subdirectory(modules)

