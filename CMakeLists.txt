cmake_minimum_required(VERSION 3.17)
project(Task4Composite)

set(CMAKE_CXX_STANDARD 14)

add_executable(Task4Composite main.cpp Component.h Hardware.cpp Hardware.h Composite.cpp Composite.h)