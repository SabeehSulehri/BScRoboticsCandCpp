/*
CH-230-A
a8_p7.c
Sabeeh Sulehri 
s.sulehri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1, *f2, *f3;
    char ch;

    f1 = fopen("text1.txt","r");
    if(f1 == NULL)
    {
        printf("Error opening file 1.\n");
        exit(0);
    }

    f2 = fopen("text2.txt","r");
    if(f2 == NULL)
    {
        printf("Error opening file 2.\n");
        exit(0);
    }

    f3 = fopen("merge12.txt","w");
    if(f3 == NULL)
    {
        printf("Error opening file 3.\n");
        exit(0);
    }

    while((ch=getc(f1)) != EOF)
    {
        fputc(ch,f3);
    }

    fputc("\n",f3);

    while((ch=getc(f2)) != EOF)
    {
        fputc(ch,f3);
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}