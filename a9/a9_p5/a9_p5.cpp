/*
CH-230-A
a9_p5.cpp 
Sabeeh Sulehri 
s.sulehri@jacobs-university.de
*/
// done

#include <iostream>
#include <cstdlib>
#include  <ctime>
using namespace std;

int main()
{
    array name;
    cout << "Enter your name:" << endl;
    cin >> name;

    int guess, tries = 1;

    int die = 0;
    int randomnumber;
    srand(static_cast<unsigned int>(time(0)));
    randomnumber = rand();
    die = (randomnumber % 99) + 1;

    cout << "Enter your guess:" << endl;

    while(guess != die)
    {
        cin >> guess;
        if(guess > die)
        {
            cout << "your value is a bit higher" << endl;
        }
        if(guess < die)
        {
            cout << "your value is a bit lower" << endl;
        }
        cout << "enter another guess" << endl;
        tries++;
    }

    cout << "Congratulations " << name << "!!" << endl;
    cout << "Correct guess in " << tries << " tries!" << endl;

    return 0;
}