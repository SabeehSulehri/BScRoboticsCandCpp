/*
CH-230-A
a2_p1.c
Sabeeh Sulehri
ssulehri@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double x,y;
    scanf("%lf",&x);
    scanf("%lf",&y);

    int a,b;
    scanf("%i",&a);
    scanf("%i",&b);

    char p,q;
    getchar();
    scanf("%c",&p);
    getchar();
    scanf("%c",&q);

    printf("sum of doubles=%lf\n",x + y);
    printf("difference of doubles=%lf\n",x - y);
    printf("square=%lf\n",x*x);

    printf("sum of integers=%i\n",a + b);
    printf("product of integers=%i\n",a * b);

    printf("sum of chars=%i\n",p + q);
    printf("product of chars=%i\n",p * q);

    printf("sum of chars=%c\n",p + q);
    printf("product of chars=%c\n",p * q);

    return 0;
}