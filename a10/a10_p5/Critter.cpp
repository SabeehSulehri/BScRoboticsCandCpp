#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter() {
	name = "Default Critter";
	hunger = 0.2;
	boredom = 0;
	height = 5;
	thirst = hunger;
	cout << " Constructor 1 is being called" << endl;
}

Critter::Critter(string n) {
	name = n;
	hunger = 0.2;
	boredom = 0;
	thirst = hunger;
	height = 5;
	cout << "Constructor 2 is being called." << endl;
}

Critter::Critter(string n, int hu, int bo, double hi=10) {
	name = n;
	hunger = convert(hu);
	boredom = bo;
	thirst = hunger;
	height = 5;
	cout << "Constructor 3 is being called." << endl;
}

Critter::Critter(string n, int hu, int bo, int th, double hi=10) {
	name = n;
	hunger = convert(hu);
	boredom = bo;
	thirst = convert(th);
	height = hi;
	cout << "Constructor 4 is being called." << endl;
}


void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = convert(newhunger);
}

void Critter::setThirst(int newthirst) {
	thirst = convert(newthirst);
}

void Critter::print() {
	cout << "I am " << name << "." << endl;
	cout << "My hunger level is " << getHunger() << "." << endl;
	cout << "My boredom level is " << boredom << "." << endl;
	cout << "My height is " << height << "." << endl;
	cout << "My thirst level is " << getThirst() << "." << endl;
}

int Critter::getHunger() {
	return convertbackhunger();
}

int Critter::getThirst() {
	return convertbackthirst();
}

double Critter::convert(int newvalue) {
	return (double)newvalue/10.0;
}

int Critter::convertbackhunger() {
	return (int)(hunger*10);
}

int Critter::convertbackthirst() {
	return (int)(thirst*10);
}