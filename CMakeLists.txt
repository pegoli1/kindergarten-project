cmake_minimum_required(VERSION 3.19)
project(Kindergaten)

set(CMAKE_CXX_STANDARD 14)

add_executable(Kindergaten main.cpp Kindergarten.cpp Kindergarten.h Person.cpp Person.h Admin.cpp Admin.h Child.cpp Child.h Desk.cpp Desk.h Board.cpp Board.h)