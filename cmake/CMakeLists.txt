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
  set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded")

  add_executable(one one.cpp)
  add_executable(two two.cpp)
  add_executable(three three.cpp)

  # set_property(TARGET one PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded")
  # set_property(TARGET two PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded")
  # set_property(TARGET three PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded")
endif (WIN32)
