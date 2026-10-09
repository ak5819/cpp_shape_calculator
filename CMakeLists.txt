cmake_minimum_required(VERSION 3.12)
project(ShapeCalculator LANGUAGES CXX)

add_executable(shape_calculator
    src/main.cpp
    src/Shape.cpp
    src/Circle.cpp
    src/Rectangle.cpp
)
target_include_directories(shape_calculator PRIVATE include)
target_compile_features(shape_calculator PRIVATE cxx_std_17)
