/*
CH-230-A
a6_p5.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done but how the hell what??

#include <stdio.h>
#include <math.h>

void printbackwards(unsigned char ch, int pos) 
{
    for (int i=0; i<pos ; i++) 
    {
        if (ch & 1 << i) 
        {
            printf("1");
        }
        else 
        {
        printf("0");
        }
    }
    printf("\n");
 }

int position(unsigned char c)
{
    int position,x;
    for(x=0; ; x++)
    {
        if((c-(pow(2,x)))<0)
        {
            position = x;
            break;
        }
    }

    return position;
}

int main()
{
    unsigned char c;
    scanf("%c",&c);
    int pos = position(c);

    printbackwards(c,pos);

    return 0;
}