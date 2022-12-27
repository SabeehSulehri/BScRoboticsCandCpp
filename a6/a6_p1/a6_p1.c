/*
CH-230-A
a6_p1.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#define SWAP(t,p,q) {t temp; temp=p; p=q; q=temp; }

int main()
{
    int a,b;
    double x,y;

    scanf("%d%d%lf%lf",&a,&b,&x,&y);

    SWAP(int,a,b);
    SWAP(double,x,y);

    printf("After swapping:\n");
    printf("%d\n%d\n",a,b);
    printf("%.6lf\n%.6lf\n",x,y);

    return 0;
}