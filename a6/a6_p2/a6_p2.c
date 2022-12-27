/*
CH-230-A
a6_p2.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done 

#include <stdio.h>

#define LSBIT(ch,res) {if((ch&1)==1) \
                        {res = 1;} \
                        else \
                        {res = 0;}}

int main()
{
    unsigned char c;
    scanf("%c",&c);
    int res;
    
    printf("The decimal repreesentation is: %d\n",c);
    LSBIT(c,res);
    printf("The least significant bit is: %d\n",res);

    return 0;
}