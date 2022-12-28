/*
CH-230-A
a9_p3.cpp 
Sabeeh Sulehri 
s.sulehri@jacobs-university.de
*/
// done

#include <iostream>
using namespace std;

float abs(float x)
{
    if(x<0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}

int main()
{
    float x;
    cin >> x;

    float abs_value = abs(x);
    cout << "The absolute value of " << x << " is " << abs_value << endl;

    return 0;
}