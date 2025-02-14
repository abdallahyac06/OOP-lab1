#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle() {
    width = 0;
    length = 0;
}

Rectangle::Rectangle(float width, float length) {
    setWidth(width);
    setLength(length);
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::getLength() const {
    return length;
}

void Rectangle::setWidth(float width) {
    Rectangle::width = (width > 0) ? width : 0;
}

void Rectangle::setLength(float length) {
    Rectangle::length = (length > 0) ? length : 0;
}

float Rectangle::area() const {
    return width * length;
}

float Rectangle::perimeter() const {
    return (width + length) * 2;
}

Rectangle::~Rectangle() {
    std::cout << "This destroyed a rectangle object." << std::endl;
}