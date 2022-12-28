#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;
int main()
{
    int r1, r2, i1, i2;
    Complex conjugate, sum, difference, product;

    cout << " Enter the values:" << endl;
    cout << "real and imaginary part of first complex number" << endl;
    cin >> r1 >> i1;
    cout << "real and imaginary part of seecond complex number" << endl;
    cin >> r2 >> i2;

    Complex c1(r1,i1);
    Complex c2(r2,i2);

    cout << "Your inputs are:" << endl;
    c1.print();
    c2.print();

    conjugate=c1.conjugate();

    cout << " Conjugated 1 is" << endl;
    conjugate.print();

    sum=c1.sum(c2);
    cout << "Sum of the complex numbers is" << endl;
    sum.print();

    difference=c2.difference(c1);
    cout << "Difference of the complex numbers is" << endl;
    difference.print();

    product=c1.multiplication(c2);
    cout << "product of the complex numbers is" << endl;
    product.print();

    return 0;
}