cmake_minimum_required(VERSION 3.12)
project(Ch6_2 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 23)

add_executable(Ch6_2 main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
