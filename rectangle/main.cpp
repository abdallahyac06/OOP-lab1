#include "rectangle.h"
#include <iostream>

void read(Rectangle *rectangle) {
    float width, length;
    std::cin >> width >> length;
    rectangle -> setWidth(width);
    rectangle -> setLength(length);
}

void display(Rectangle &rectangle) {
    std::cout << "- Width     : " << rectangle.getWidth() << std::endl;
    std::cout << "- Length    : " << rectangle.getLength() << std::endl;
    std::cout << "- Area      : " << rectangle.area() << std::endl;
    std::cout << "- Perimeter : " << rectangle.perimeter() << std::endl;
}

int main() {
    Rectangle r1(1.5, 2.75);
    std::cout << "Rectangle r1" << std::endl;
    display(r1);
    r1.~Rectangle();


    Rectangle r2;
    std::cout << "Enter the width and the length of Rectangle r2" << std::endl;
    read(&r2);
    std::cout << "Rectangle r2" << std::endl;
    display(r2);


    Rectangle array[4];
    for (int i = 0; i < 4; i++) {
        std::cout << "Enter the width and the length of Rectangle " << i + 1 << std::endl;
        read(array + i);
    }
    for (int i = 0; i < 4; i++) {
        std::cout << "Rectangle " << i + 1 << std::endl;
        display(array[i]);
    }

    return 0;
}