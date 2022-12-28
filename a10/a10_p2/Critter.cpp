#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setEnergy(int newenergy) {
	energy = newenergy;
}

void Critter::setHappiness(int newhappiness) {
	happiness = newhappiness;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
	cout << "I am " << name << ". My happiness level is " << happiness << "." << endl;
	cout << "I am " << name << ". My energy level is " << energy << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getHappiness() {
	return happiness;
}

int Critter::getEnergy() {
	return energy;
}