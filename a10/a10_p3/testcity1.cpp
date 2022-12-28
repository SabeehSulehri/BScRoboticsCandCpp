
#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main()
{   
    City c;

    string name;
    string mayor;
    double inhabitants;
    double area;

    cout << "Please enter data:" << endl;

    cout << "Name of the city: ";
    getline(cin, name);
    c.setName(name);

    cout << "How many inhabitants?";
    cin >> inhabitants;
    c.setInhabitants(inhabitants);

    cout << "Name of the Mayor: ";
    getline(cin, mayor);
    c.setMayor(mayor);

    cout << "How much is the area?";
    cin >> area;
    c.setArea(area);

    cout << "You have entered:" << endl;
    c.print();

    return 0;
}