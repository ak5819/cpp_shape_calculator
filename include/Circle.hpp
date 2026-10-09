#pragma once
#include "Shape.hpp"

class Circle final : public Shape {
public:
    explicit Circle(double radius);
    double area() const override;
    const char* name() const override;

private:
    double radius_;
};
