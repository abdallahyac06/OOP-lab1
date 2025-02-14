#include "rational.h"
#include <iostream>
#include <cmath>

int gcd(int a, int b) {
    int r = a % b;
    while (r) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

Rational::Rational(int num, int denom) {
    setRational(num, denom);
}

void Rational::reduce() {
    int n = gcd(numerator, denominator);
    numerator /= n;
    denominator /= n;
}

void Rational::setRational(int num, int denom) {
    if (denom == 0) {
        std::cout << "Zero Division Error. Automatically set to 0/1." << std::endl;
        numerator = 0;
        denominator = 1;
    } else {
        numerator = (num * denom >= 0)? abs(num): -abs(num);
        denominator = abs(denom);
        reduce();
    }
}

int Rational::getNumerator() const {
    return numerator;
}

int Rational::getDenominator() const {
    return denominator;
}

void Rational::addition(const Rational &other) {
    setRational(numerator * other.denominator + denominator * other.numerator,
                denominator * other.denominator);
}

void Rational::subtraction(const Rational &other) {
    setRational(numerator * other.denominator - denominator * other.numerator,
                denominator * other.denominator);
}

void Rational::multiplication(const Rational &other) {
    setRational(numerator * other.numerator,
                denominator * other.denominator);
}

void Rational::division(const Rational &other) {
    setRational(numerator * other.denominator,
                denominator * other.numerator);
}

void Rational::displayFraction() const {
    std::cout << numerator << " / " << denominator;
}

void Rational::displayFloat() const {
    std::cout << float(numerator) / denominator;
}

Rational::~Rational() {
    std::cout << "Rational object destroyed." << std::endl;
}