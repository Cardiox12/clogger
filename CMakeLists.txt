cmake_minimum_required(VERSION 3.19)
project(clogger)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        ${PROJECT_NAME}
        main.cpp
        includes/clogger.hpp
        srcs/clogger.cpp
)
