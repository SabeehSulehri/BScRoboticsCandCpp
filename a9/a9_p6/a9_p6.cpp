/*
CH-230-A
a9_p6.cpp 
Sabeeh Sulehri 
s.sulehri@jacobs-university.de
*/
// done

#include <iostream>
#include <cstring>
using namespace std;

int myfirst(int array[])
{
    int count = 0;
    for(int idx = 0; sizeof(array); idx++)
    {
        if(array[idx] % 2 == 0 && array[idx] >=0)
        {
            count++;
            return array[idx];
        }
    }
    if(count == 0)
    {
        return -1;
    }
}

double myfirst(double array[])
{
    int count = 0;
    for(int idx = 0; sizeof(array); idx++)
    {
        if(array[idx] <0 && (int)array[idx]==array[idx])
        {
            count++;
            return array[idx];
        }
    }
    if(count == 0)
    {
        return -1.1;
    }
}

char myfirst(char array[])
{
    int count = 0;
    for(int idx=0;idx < strlen(array) ;idx++)
    {
        if(array[idx] >= 'A' && array[idx] <= 'Z' || array[idx] >= 'a' && array[idx] <= 'z' )
        {
            if(array[idx]!=97 && array[idx]!=101 && array[idx]!=105 && array[idx]!=111 &&
         array[idx]!=117 && array[idx]!=65 && array[idx]!=69 && array[idx]!=73 &&
         array[idx]!=79 && array[idx]!=85)
            {
                count++;
                return array[idx];
            }
        }
    }
    if(count == 0)
    {
        return 0;
    }
}

int main()
{
    int iarray[5] = {1,2,3,4,5};
    double darray[5] = {12.2,1.1,-14.5,9,-4};
    char sarray[50] = ("this is okayyy");
    cout << myfirst(iarray) << endl;
    cout << myfirst(darray) << endl;
    cout << myfirst(sarray) << endl;
    return 0;
}