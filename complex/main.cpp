#include "complex.h"
#include <iostream>

int main() {
    Complex z1(1, 1), z2, z3;
    double real, imag;
    std::cout << "Enter z2" << std::endl;
    std::cin >> real >> imag;
    z2.setComplexNumber(real, imag);

    std::cout << "z1 = ";
    z1.printComplex();
    std::cout << "z2 = ";
    z2.printComplex();

    std::cout << "z1 + z2 = ";
    z3 = z1;
    z3.addition(z2);
    z3.printComplex();

    std::cout << "z1 - z2 = ";
    z3 = z1;
    z3.subtraction(z2);
    z3.printComplex();

    std::cout << "z1 * z2 = ";
    z3 = z1;
    z3.multiplication(z2);
    z3.printComplex();

    return 0;
}