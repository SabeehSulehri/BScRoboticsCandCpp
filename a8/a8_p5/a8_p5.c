/*
CH-230-A
a8_p5.c
Sabeeh Sulehri 
s.sulehri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *F1, *F2;
    char ch1, ch2;
    int int1, int2, sum;

    F1 = fopen("chars.txt","r");
    if(F1==NULL)
    {
        printf("can't open the file 1.\n");
        exit(1);
    }

    F2 = fopen("codesum.txt","w");
    if(F2==NULL)
    {
        printf("can't open the file 2.\n");
        exit(1);
    }

    ch1 = getc(F1);
    ch2 = getc(F2);

    int1 = (int)ch1;
    int2 = (int)ch2;
    sum = int1 + int2;

    fprintf(F2, "%d" ,sum);

    fclose(F1);
    fclose(F2);

    return 0;
}