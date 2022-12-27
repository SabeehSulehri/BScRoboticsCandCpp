/*
CH-230-A
a2_p10.c
Sabeeh Sulehri
ssulehri@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%i",&n);

    while(n<=0)
    {
        scanf("%i",&n);
    }

    printf("1 day = 24 hours\n");

    int h = 24;
    int x =2;
    while (x<=n)
    {
        printf("%i days = %i hours\n",x,h*x);
        x++;
    }

    return 0;
}