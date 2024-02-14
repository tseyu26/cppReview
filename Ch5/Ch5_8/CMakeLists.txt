cmake_minimum_required(VERSION 3.28)
project(Ch5_8 VERSION 0.1.0 LANGUAGES C CXX)


add_executable(Ch5_8 main.cpp)

set(CMAKE_CXX_STANDARD 23)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
