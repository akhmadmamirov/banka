cmake_minimum_required(VERSION 3.30)
project(banking_system)

set(CMAKE_CXX_STANDARD 20)

add_executable(banking_system main.cpp
        user.h
        user.cpp
        bank.cpp
        bank.h)
