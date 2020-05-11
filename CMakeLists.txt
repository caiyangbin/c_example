cmake_minimum_required(VERSION 3.15)
project(c_example C)

set(CMAKE_C_STANDARD 99)

add_executable(c_example src/com.luuren.example/main.c src/com.luuren.example/include/linked_list.h src/com.luuren.example/source/linked_list.c)