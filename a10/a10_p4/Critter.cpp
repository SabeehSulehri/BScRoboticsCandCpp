#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter() {
	name = "Default Critter";
	height = 5;
	hunger = 0;
	boredom = 0;
	cout << " Constructor 1 is being called" << endl;
}

Critter::Critter(string n) {
	name = n;
	height = 5;
	hunger = 0;
	boredom = 0;
	out << "Constructor 2 is being called." << endl;
}

Critter::Critter(string n, int hu, int bo, double hi) {
	name = n;
	height = hi;
	hunger = hu;
	boredom = bo;
	out << "Constructor 3 is being called." << endl;
}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}


void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
	cout << "I am " << name << ". My bordom level is " << boredom << "." << endl;
	cout << "I am " << name << ". My height is " << height << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}
