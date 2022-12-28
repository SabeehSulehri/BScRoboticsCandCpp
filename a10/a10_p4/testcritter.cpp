#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	string name = "ABCD";

	//using first contructor
	Critter c1;
	//using second constructor
	Critter c2(name);
	//using third constructor with all parameters
	Critter c3("Critter3", 3, 8, 6);
	//using third constructor without specifying the height
	Critter c4("Critter4", 3, 8);

	cout << endl << "You have created:" << endl << endl;

	//printing properties of the 4 critters
	c1.print();
	cout << endl;
	c2.print();
	cout << endl;
	c3.print();
	cout << endl;
	c4.print();
	cout << endl;

    return 0;
}