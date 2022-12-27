/*
CH-230-A
a4 p12.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceAll(char *str, char c, char e)
{
    int i; 
    for(i=0;i<strlen(str);i++)
    {
        if(str[i] == c)
        {
            str[i] = e;
        }
    }
}

int main()
{
    while(1)
    {
        char string[80];
        printf("Enter the string:\n");
        getchar();
        fgets(string, 80, stdin);

        char tbr, r;
        //getchar();
        printf("\nenter the char to be replaced:");
        scanf("%c",&tbr);
        getchar();
        printf("\nenter the char replacing:");
        scanf("%c",&r);

        printf("The string before: %s\n The char to be replaced: %c\n The char replacing: %c\n", string, tbr,r);
        replaceAll(string, tbr, r);
        printf("The string after: %s\n The char replaced: %c\n The char replacing: %c\n", string, tbr,r);


    }
    return 0;
}

