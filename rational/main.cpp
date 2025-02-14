#include "rational.h"
#include <iostream>

void display(Rational &rational) {
    std::cout << " = ";
    rational.displayFraction();
    std::cout << " = ";
    rational.displayFloat();
    std::cout << std::endl;
}

int main() {
    Rational r1(2, -5);
    Rational r2, r3;
    double real, imag;
    std::cout << "Enter r2" << std::endl;
    std::cin >> real >> imag;
    r2.setRational(real, imag);

    std::cout << "r1";
    display(r1);
    std::cout << "r2";
    display(r2);

    r3 = r1;
    r3.addition(r2);
    std::cout << "r1 + r2";
    display(r3);

    r3 = r1;
    r3.subtraction(r2);
    std::cout << "r1 - r2";
    display(r3);

    r3 = r1;
    r3.multiplication(r2);
    std::cout << "r1 * r2";
    display(r3);

    r3 = r1;
    r3.division(r2);
    std::cout << "r1 / r2";
    display(r3);

    return 0;
}