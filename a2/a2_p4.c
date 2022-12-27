/*
CH-230-A
a2_p4.c
Sabeeh Sulehri
ssulehri@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    float a,b,h;
    scanf("%f%f%f",&a,&b,&h);

    printf("square area=%f\nrectangle area=%f\n",a*a,a*b);
    printf("triangle area=%f\n",(0.5)*a*h);
    printf("trapezoid area=%f\n",(0.5)*(a+b)*h);
    return 0;
}