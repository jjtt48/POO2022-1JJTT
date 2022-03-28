cmake_minimum_required(VERSION 3.21)
project(Figuras)

set(CMAKE_CXX_STANDARD 14)

add_executable(Figuras main.cpp Figura.cpp Figura.h Circulo.cpp Circulo.h Cuadrado.cpp Cuadrado.h Rectangulo.cpp Rectangulo.h)
