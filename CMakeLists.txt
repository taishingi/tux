cmake_minimum_required(VERSION 3.5)

project(tux VERSION 0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 23)

add_compile_options(-Wall -Wextra -ansi -pedantic)

macro(add lib)
    add_library(${lib} libs/${lib}/${lib}.hpp libs/${lib}/${lib}.cpp)
    install(FILES libs/${lib}/${lib}.hpp DESTINATION include)
    install(TARGETS ${lib} DESTINATION lib)
endmacro()

add(fs)
add(str)

add_library(tux libs/tux/tux.hpp libs/tux/tux.cpp)
target_link_libraries(tux fs str unit installation)
install(FILES libs/tux/tux.hpp DESTINATION include)
install(TARGETS tux DESTINATION lib)
