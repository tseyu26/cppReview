cmake_minimum_required(VERSION 3.23)
project(Ch12_12 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 23)
add_executable(Ch12_12 main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
