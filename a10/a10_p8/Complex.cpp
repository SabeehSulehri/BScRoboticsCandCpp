#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex::Complex() {
    real = 0;
    imaginary = 0;
}

Complex::Complex(int r, int i) {
    real = r;
    imaginary = i;
}

//copy constructor
Complex::Complex(const Complex& C) {
    real = C.real;
    imaginary = C.imaginary;
}

//destructor
Complex::~Complex(){

}

void Complex::setReal(int newreal) {
    real = newreal;
}

void Complex::setImaginary(int newimaginary) {
    real = newimaginary;
}

int Complex::getReal() {
    return real;
}

int Complex::getImaginary() {
    return imaginary;
}

void Complex::print()
{   if(imaginary<0)
    {
        cout << real << imaginary << endl;
    }
    else
    {
        cout << real << "+" << imaginary << endl;
    }
}

Complex Complex::conjugate() {
    Complex ctemp;
    ctemp.real = real;
    ctemp.imaginary = -imaginary;
    return ctemp;
}

Complex Complex::sum(Complex c) {
    Complex ctemp;
    ctemp.real = real + c.real;
    ctemp.imaginary = imaginary + c.imaginary;
    return ctemp;
}

Complex Complex::difference(Complex c) {
    Complex ctemp;
    ctemp.real = real - c.real;
    ctemp.imaginary = imaginary - c.imaginary;
    return ctemp;
}

Complex Complex::multiplication(Complex c) {
    Complex ctemp;
    ctemp.real = real*c.real;
    ctemp.imaginary = imaginary*c.imaginary;
    return ctemp;
}