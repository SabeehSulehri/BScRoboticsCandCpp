#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
	int happiness;
	int energy;

	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "Happiness: ";
	cin >> happiness;
	c.setHappiness(happiness);

	cout << "Energy: ";
	cin >> energy;
	c.setEnergy(energy);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}