cmake_minimum_required(VERSION 3.5)

project(tux VERSION 0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 23)

add_compile_options(-Wall -Wextra -ansi -pedantic)

macro(add lib)
    add_library(${lib} ${lib}.hpp ${lib}.cpp)
    install(FILES ${lib}.hpp DESTINATION include)
    install(TARGETS ${lib} DESTINATION lib)
endmacro()

add(tux)
