cmake_minimum_required(VERSION 3.6)
project(Fillit)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c
        libft/
        src/
        )

add_executable(Fillit ${SOURCE_FILES})