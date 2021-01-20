cmake_minimum_required(VERSION 3.16)

project(CPlusPlus VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

message("Compiler: ${CMAKE_CXX_COMPILER_ID}")

add_executable(one one.cpp)
add_executable(two two.cpp)
add_executable(three three.cpp)

if (WIN32 AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  target_link_libraries(one PUBLIC -static)
  target_link_libraries(two PUBLIC -static)
  target_link_libraries(three PUBLIC -static)
endif ()
