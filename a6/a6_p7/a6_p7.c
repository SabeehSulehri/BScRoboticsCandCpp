/*
CH-230-A
a6_p7.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

void binaryrep(unsigned char ch)
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

void set3bits(unsigned char ch,int a,int b,int c)
{
    int idx;

    for(idx=7;idx>=0;idx--)
    {
        if(idx == a || idx == b || idx == c)
        {
            if(ch | (1 << idx))
            {
                printf("1");
            }
        }
        else
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



}

int main()
{
    unsigned char ch;
    scanf("%c",&ch);

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    printf("The decimal representation is: %d\n",ch);
    printf("The binary representation is: ");
    binaryrep(ch);

    printf("\n");

    set3bits(ch,a,b,c);

    return 0;
}