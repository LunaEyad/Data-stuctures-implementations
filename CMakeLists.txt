cmake_minimum_required(VERSION 3.21)
project(implementations)

set(CMAKE_CXX_STANDARD 14)

add_executable(implementations main.cpp stack.cpp stack.h stack_ll.cpp stack_ll.h)
