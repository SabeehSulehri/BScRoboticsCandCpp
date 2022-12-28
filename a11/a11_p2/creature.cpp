#include <iostream>

using namespace std;

class Creature 
{
	public:
		Creature(); 
        ~Creature(); 
		void run() const;

	protected:
		int distance;
};

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

class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

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

class Mage : public Creature 
{
public:
    Mage();
    ~Mage();
    void walk() const;

private:
    int distFactor;
};

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

class Dragon : public Creature 
{
public:
    Dragon();
    ~Dragon();
    void fly() const;

private:
    int distFactor;
};

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