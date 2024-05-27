cmake_minimum_required(VERSION 3.22)
project(implelemntacja)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(implelemntacja
        Administrator.cpp
        Administrator.h
        klient.cpp
        klient.h
        koszyk.cpp
        koszyk.h
        main.cpp
        produkt.cpp
        produkt.h)
