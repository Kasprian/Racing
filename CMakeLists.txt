cmake_minimum_required(VERSION 3.8)

set(This Racing)

project(${This} C CXX)

if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_subdirectory(googletest)

include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>

add_executable(mytests Tests.cpp Point.cpp LineSegment.cpp Triangle.cpp RectangularTriangle.cpp) # add this executable

target_link_libraries(mytests PRIVATE gtest) # link google test to this executable