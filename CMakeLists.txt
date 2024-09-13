cmake_minimum_required(VERSION 3.29)
project(sgb)

set(CMAKE_CXX_STANDARD 14)

add_executable(sgb  main.c
        cadastro.c
        busca.c
        listagem.c

)
