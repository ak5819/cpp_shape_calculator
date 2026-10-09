#include "Shape.hpp"
#include <iostream>

Shape::~Shape() {
    std::cout << "Destroying shape\n";
}
