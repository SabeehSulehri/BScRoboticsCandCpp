/*
CH-230-A
a6_p6.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <math.h>

void printb(unsigned char ch) 
{
    for(int idx=7;idx>=0;idx--)
    {
        if(ch & (1 << idx))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }


}

int main()
{
    unsigned char c;
    scanf("%c",&c);
    printf("The decimal representation is: %d\n",c);
    printf("The binary representation is: ");
    printb(c);

    return 0;
}