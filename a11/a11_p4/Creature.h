
class Creature 
{
	public:
		Creature(); 
        ~Creature(); 
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

class Mage : public Creature 
{
public:
    Mage();
    ~Mage();
    void walk() const;

private:
    int distFactor;
};

class Dragon : public Creature 
{
public:
    Dragon();
    ~Dragon();
    void fly() const;

private:
    int distFactor;
};