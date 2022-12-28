/*
CH-230-A
a9_p4.cpp 
Sabeeh Sulehri 
s.sulehri@jacobs-university.de
*/
// done

#include <iostream>
#include <cstring>
using namespace std;

int mycount(int a, int b)
{
    return b - a;
}

int mycount(char ch, array s)
{
    int count=0;

    for(int idx=0; idx < sizeof(s); idx++)
    {
        if(s[idx] == ch)
        {
            count++;
        }
    }
    return count;

}

int main()
{
    printf("%d\n",mycount('i',"This is a string"));
    printf("%d\n",mycount(7,3));
    return 0;
}