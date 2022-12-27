/*
CH-230-A
a3_p2.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

int main()
{
    char ch;
    int n, x=0;
    scanf("%c\n%i",&ch,&n);

    while(x<n)
    {
        printf(" %c,",ch-x);
        x++;
    }
        while(x==n)
    {
        printf(" %c",ch-x);
        x++;
    }
    return 0;
}