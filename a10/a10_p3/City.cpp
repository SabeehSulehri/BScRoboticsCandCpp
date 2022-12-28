
#include <iostream>
#include "City.h"

using namespace std;

void City::setName(string& newname) {
    name = newname;
}

void City::setInhabitants(double newinhibitants) {
    inhabitants = newinhibitants;
}

void City::setMayor(string& newmayor) {
    mayor = newmayor;
}

void City::setArea(double newarea) {
    area = newarea;
}

string City::getName() {
    return name;
}

double City::getInhabitants() {
    return inhabitants;
}

string City::getMayor() {
    return mayor;
}

double City::getArea() {
    return area;
}

void City::print() {
    cout << name << " has " << inhabitants << " million inhabitants living in it. The name of the mayor is ";
    cout << mayor << " and the total area is " << area << ".";
}