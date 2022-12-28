#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();
    cout <<endl;

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
    cout <<endl;

    cout << "\nCreating a Mage.\n";
    Mage m;
    m.run();
    m.walk();
    cout <<endl;

    cout << "\nCreating a Dragon.\n";
    Dragon d;
    d.run();
    d.fly();
    cout <<endl;

    return 0;
} 