/*
CH-230-A
a5_11.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done but revise

#include <stdio.h>
#include <math.h>

int check(int x,int sqx)
{
    if(x == 1)
    {
        return 0;
    }
    else if(sqx == 1)
    {
        return 1;
    }

    else
    {
        if(x%sqx==0)
        {
            return 0;
        }
        else
        {
            check(x,sqx-1);
        }
    }
}

int main()
{
    int x;
    scanf("%d",&x);
    while(x<0)
    {
        scanf("%d",&x);
    }

    int sqx = (int) sqrt(x);

    printf("%d\n",sqx);
    
    check(x,sqx);
    if(check(x,sqx) == 0)
    {
        printf("%d is not a prime.\n",x);
    }
    else
    {
        printf("%d is a prime.\n",x);
    }

    return 0;
}