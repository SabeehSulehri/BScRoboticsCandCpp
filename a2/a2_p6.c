/*
CH-230-A
a2_p6.c
Sabeeh Sulehri
ssulehri@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double x,y;
    scanf("%lf%lf",&x,&y);

    double *ptr_one, *ptr_two, *ptr_three;

    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    printf("%p\n%p\n%p\n",ptr_one, ptr_two, ptr_three);

    return 0;
}