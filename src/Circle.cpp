#include "Circle.hpp"

Circle::Circle(double radius) : radius_(radius) {}

double Circle::area() const {
    constexpr double pi = 3.141592653589793;
    return pi * radius_ * radius_;
}

const char* Circle::name() const {
    return "Circle";
}
