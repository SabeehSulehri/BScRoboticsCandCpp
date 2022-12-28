#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{

    while(1)
    {
        string word;
        cout << "Enter the input:\n";
        getline(cin,word);

        if(word == "wizard")
        {
            cout << "\nCreating a Wizard.\n";
            Wizard *w;
            w = new Wizard;
            w->run();
            w->hover();
            cout <<endl;

            delete w;
        }
        else if(word == "Mage")
        {
            cout << "\nCreating a Mage.\n";
            Mage *m;
            m = new Mage;
            m->run();
            m->walk();
            cout <<endl;

            delete m;
        }
        else if(word == "Dragon")
        {
            cout << "\nCreating a Dragon.\n";
            Dragon *d;
            d = new Dragon;
            d->run();
            d->fly();
            cout <<endl;

            delete d;
        }
        else if(word == "quit")
        {
            return 0;
        }
    }

    return 0;
} 