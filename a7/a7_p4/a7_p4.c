/*
CH-230-A
a7_p4.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void uppercase(char* string)
{
    for(int idx=0;idx<strlen(string);idx++)
    {
        printf("%c",toupper(string[idx]));
    }
}

void lowercase(char* string)
{
    for(int idx=0;idx<strlen(string);idx++)
    {
        printf("%c",tolower(string[idx]));
    }
}

void upperlowercase(char* string)
{
    for(int idx=0;idx<strlen(string);idx++)
    {
        if(toupper(string[idx]) == string[idx])
        {
            printf("%c",tolower(string[idx]));
        }
        else if(tolower(string[idx]) == string[idx])
        {
            printf("%c",toupper(string[idx]));
        }
        else
        {
            printf("%c",string[idx]);
        }
    }
}

void quit(char* string)
{
    exit(0);
}

void(*function[4])(char* string)={uppercase,lowercase,upperlowercase,quit};

int main()
{
    char string[100];
    int i;

    fgets(string,sizeof(string),stdin);

    scanf("%d",&i);
    while(1)
    {
        function[i-1](string);
        scanf("%d",&i);
    }

    return 0;
}