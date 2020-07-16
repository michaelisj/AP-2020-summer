cmake_minimum_required(VERSION 3.0.0)
project(playground VERSION 0.1.0)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 17)
include_directories(${CMAKE_PROJECT_DIR})

add_executable(playground.out main.cpp Utilities/Utilities.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
