/*
CH-230-A
a3_p1.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

int main()
{
    float x;
    scanf("%f",&x);
    int n;
    scanf("%i",&n);

    while(n<=0)
    {
        printf("Input is invalid, reenter value\n");
        scanf("%i",&n); 
    }

    int c=0;
    while(c<=n && n!=0)
    {
        printf("%f\n",x);
        c++;
    }
    return 0;
}