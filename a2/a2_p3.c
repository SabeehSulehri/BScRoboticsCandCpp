/*
CH-230-A
a2_p3.c
Sabeeh Sulehri
ssulehri@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int w,d,h;
    scanf("%i%i%i",&w,&d,&h);
    printf("%i",w*7*24+d*24+h);
    return 0;
}