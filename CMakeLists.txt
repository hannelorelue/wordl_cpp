cmake_minimum_required(VERSION 3.16)

project(wordle_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(wordle_cpp main.cpp
    word_game.hpp word_game.cpp)

include(GNUInstallDirs)
install(TARGETS wordle_cpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
