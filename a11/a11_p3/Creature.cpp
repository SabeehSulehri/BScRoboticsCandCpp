#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10)
{
    cout << "constructor for Creature" << endl;
}

Creature::~Creature()
{
    cout << "Creature destructor!" << endl;
}

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

Wizard::Wizard() : distFactor(3)
{
    cout << "constructor for Wizard" << endl;
}  

Wizard::~Wizard()
{
    cout << "Wizard destructor!" << endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Mage::Mage() : distFactor(1)
{
    cout << "constructor for Mage" << endl;
}

Mage::~Mage() 
{
    cout << "Mage destructor!" << endl;

}

void Mage::walk() const 
{
    cout << "walking " << (distFactor*distance) << " meters!\n";
}

Dragon::Dragon() : distFactor(25)
{
    cout << "constructor for Dragon" << endl;
}

Dragon::~Dragon()
{
    cout << "Dragon destructor!" << endl;
}

void Dragon::fly() const 
{
    cout << "flying " << (distFactor*distance) << " metres!\n";
}