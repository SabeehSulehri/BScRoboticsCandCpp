/*
CH-230-A
a6_p3.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

#define MIN(x,y) ((x) < (y) ? (x) : (y))

#define MAX(x,y) ((x) > (y) ? (x) : (y))

#define MID(x,y,z) ((MIN(MIN(x,y),z) + MAX(MAX(x,y),z))/2.0)


int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    double midrange = MID(a,b,c);

    printf("The mid-range is: %lf\n",midrange);

    return 0;
}