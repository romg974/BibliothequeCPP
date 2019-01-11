cmake_minimum_required(VERSION 3.13)
project(Biblio)

set(CMAKE_CXX_STANDARD 14)

add_executable(Biblio main.cpp Livre.cpp Livre.h Emprunteur.cpp Emprunteur.h BD.cpp BD.h)