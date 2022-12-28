
#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main()
{   
    City City1;
    City City2;
    City City3;
    
    string name1="Bremen";
    string name2="Paris";
    string name3="london";

    double inhabitants1=8;
    double inhabitants2=19;
    double inhabitants3=28;

    string mayor1="Aarib";
    string mayor2="Taimur";
    string mayor3="Ashmal";

    double area1=451.45;
    double area2=897.72;
    double area3=1324.23;

    City1.setName(name1);
    City2.setName(name2);
    City3.setName(name3);

    City1.setInhabitants(inhabitants1);
    City2.setInhabitants(inhabitants2);
    City3.setInhabitants(inhabitants3);
    
    City1.setMayor(mayor1);
    City2.setMayor(mayor2);
    City3.setMayor(mayor3);

    City1.setArea(area1);
    City2.setArea(area2);
    City3.setArea(area3);

    City1.print();
    cout << endl;
    City2.print();
    cout << endl;
    City3.print();
    cout << endl;

    return 0;
}