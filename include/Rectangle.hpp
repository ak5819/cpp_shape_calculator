#pragma once
#include "Shape.hpp"

class Rectangle final : public Shape {
public:
    Rectangle(double width, double height);
    double area() const override;
    const char* name() const override;

private:
    double width_;
    double height_;
};
