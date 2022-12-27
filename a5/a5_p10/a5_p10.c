/*
CH-230-A
a5_10.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

void recursive(int n)
{
    if (n == 1)
    {
        printf("1.");
    }
    else
    {
        printf("%d,",n);
        n--;
        recursive(n);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    while(n<0)
    {
        scanf("%d",&n);
    }

    recursive(n);

    return 0;
}