#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	// new properties
	int happiness;
	int energy;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// setters for the new properties
	void setHappiness(int newhappiness);
	void setEnergy(int newenergy);

	// getter method
	int getHunger();
	// getters for the new properties
	int getHappiness();
	int getEnergy();
	// service method
	void print();
};