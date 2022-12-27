/*
CH-230-A
a2_p8.c
Sabeeh Sulehri
ssulehri@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int a;
    scanf("%i",&a);

    if(a%2==0 && a%7==0)
    {
        printf("The number is divisble by 2 and 7");
    }
    else
    {
        printf("The number is NOT divisble by 2 and 7");
    }

    return 0;
}