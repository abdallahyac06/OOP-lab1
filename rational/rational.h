#ifndef rational_H
#define rational_H

int gcd(int, int);

class Rational {
    private:
        int numerator;
        int denominator;
        void reduce();
    public:
        Rational(int = 0, int = 1);
        void setRational(int, int);
        int getNumerator() const;
        int getDenominator() const;
        void addition(const Rational&);
        void subtraction(const Rational&);
        void multiplication(const Rational&);
        void division(const Rational&);
        void displayFraction() const;
        void displayFloat() const;
        ~Rational();
};

#endif