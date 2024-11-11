cmake_minimum_required(VERSION 3.29)
project(Main_project)

set(CMAKE_CXX_STANDARD 20)

add_executable(Main_project main.cpp
        Car.cpp
        Car.h
        Human.cpp
        Human.h
        Animal.cpp
        Animal.h
        Enum.h
        Enum.cpp
        Child.cpp
        Child.h
        Adult.cpp
        Adult.h
        Home_animals.cpp
        Home_animals.h
        Wild.cpp
        Wild.h
        Freight.cpp
        Freight.h
        Light.cpp
        Light.h
)
