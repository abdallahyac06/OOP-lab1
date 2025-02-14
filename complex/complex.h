#ifndef complex_H
#define complex_H

class Complex {
    private:
        double realPart;
        double imaginaryPart;
    public:
        Complex(double = 0.0, double = 0.0);
        void addition(const Complex &);
        void subtraction(const Complex &);
        void multiplication(const Complex &);
        void printComplex () const;
        void setComplexNumber(double, double);
        ~Complex();
};

#endif