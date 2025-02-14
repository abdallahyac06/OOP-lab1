#include "complex.h"
#include <iostream>

Complex::Complex(double real, double imag) {
    setComplexNumber(real, imag);
}

void Complex::addition(const Complex &other) {
    realPart += other.realPart;
    imaginaryPart += other.imaginaryPart;
}

void Complex::subtraction(const Complex &other) {
    realPart -= other.realPart;
    imaginaryPart -= other.imaginaryPart;
}

void Complex::multiplication(const Complex &other) {
    double tmp = realPart * other.realPart - imaginaryPart * other.imaginaryPart;
    imaginaryPart = realPart * other.imaginaryPart + other.realPart * imaginaryPart;
    realPart = tmp;
}

void Complex::printComplex() const {
    std::cout << "(" << realPart << ", " << imaginaryPart << ")" << std::endl;
}

void Complex::setComplexNumber(double real, double imag) {
    realPart = real;
    imaginaryPart = imag;
}

Complex::~Complex() {
    std::cout << "Complex object destroyed." << std::endl;
}