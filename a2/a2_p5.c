/*
CH-230-A
a2_p5.c
Sabeeh Sulehri
ssulehri@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int a;
    scanf("%i",&a);
    printf("%i\n",a);

    int *ptr_a;
    ptr_a = &a;

    printf("%p\n",ptr_a);

    *ptr_a = *ptr_a + 5;

    printf("%i\n%p",*ptr_a,ptr_a);

    return 0;
}