#include "Shapes.h"

namespace shapes {


Square::Square() : sideLength(0) {}
Square::Square(float length) : sideLength(length) {}
Square::~Square() {}

void Square::setSideLength(float length) {
    sideLength = length;
}

float Square::getSideLength() const {
    return sideLength;
}


Triangle::Triangle() : base(0), height(0) {}
Triangle::Triangle(float b, float h) : base(b), height(h) {}
Triangle::~Triangle() {}

void Triangle::setBase(float b) {
    base = b;
}

void Triangle::setHeight(float h) {
    height = h;
}

float Triangle::getBase() const {
    return base;
}

float Triangle::getHeight() const {
    return height;
}


Circle::Circle() : radius(0) {}
Circle::Circle(float r) : radius(r) {}
Circle::~Circle() {}

void Circle::setRadius(float r) {
    radius = r;
}

float Circle::getRadius() const {
    return radius;
}


float Area::calculateArea(const Square& square) {
    float side = square.getSideLength();
    return side * side;
}

float Area::calculateArea(const Triangle& triangle) {
    float base = triangle.getBase();
    float height = triangle.getHeight();
    return (base * height) / 2;
}

float Area::calculateArea(const Circle& circle) {
    float radius = circle.getRadius();
    return 3.14159f * radius * radius;
}

} 
