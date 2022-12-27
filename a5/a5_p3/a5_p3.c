/*
CH-230-A
a5_p3.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
//done

#include <stdio.h>
#include <string.h>

int count_lower(char string[]);

int main()
{
    char string[50];
    int count;

    while(1)
    {
        fgets(string, sizeof(string), stdin);

        if (string[0]=='\n') 
        {
            break;
        }
        else 
        {
        printf("The number of lower case characters is: %d\n", count_lower(string));
        }
    }

    return 0;
}

int count_lower(char string[])
{
    int count=0;
    char *ptr;

    for(ptr= string; *ptr!='\n'; ptr++)
    {
        if ( *ptr>='a' && *ptr<='z')
        {
            count++;
        }
    }
    return count;
}