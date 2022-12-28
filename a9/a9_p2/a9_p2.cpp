/*
CH-230-A
a9_p2.cpp 
Sabeeh Sulehri 
s.sulehri@jacobs-university.de
*/
// done

#include <iostream>
using namespace std;

int main()
{

    int n, i = 0;
    double x;
    array s;

    cin >> n >> x >> s;

    while(i<n)
    {
        cout << s << ":" << x << endl;
        i++;
    }

    return 0;
}