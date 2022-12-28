#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double thirst;
	double height;

public: // business logic methods are public
	// constructors
	Critter();
	Critter(string n);
	Critter(string n, int hu, int bo, double hi=10);
	Critter(string n, int hu, int bo, int th, double hi=10);

	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);

	void setThirst(int newthirst);

	// getter method
	int getHunger();

	int getThirst();

	// service method
	void print();

	// converter meethods
	double convert(int);
	int convertbackhunger();
	int convertbackthirst();
};