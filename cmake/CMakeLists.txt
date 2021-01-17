cmake_minimum_required(VERSION 3.16)

project(CPlusPlus VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if (UNIX)
  add_executable(one one.cpp)
  add_executable(two two.cpp)
  add_executable(three three.cpp)
endif (UNIX)

if (WIN32)
  add_executable(one WIN32 one.cpp)
  add_executable(two WIN32 two.cpp)
  add_executable(three WIN32 three.cpp)

  target_link_libraries(one PUBLIC -static)
  target_link_libraries(two PUBLIC -static)
  target_link_libraries(three PUBLIC -static)
endif (WIN32)
