/*
CH-230-A
a4 p5.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <string.h>

int count_consonants(char string[])
{
    char *ptr=string;
    int count=0;
    for(int x=0;x<=strlen(string);x++)
    {
    if(*ptr>='A' && *ptr<='Z' || *ptr>='a' && *ptr<='z')
    {
        if(*ptr!=97 && *ptr!=101 && *ptr!=105 && *ptr!=111 &&
        *ptr!=117 && *ptr!=65 && *ptr!=69 && *ptr!=73 &&
        *ptr!=79 && *ptr!=85)
        {
            count++;
        }
        else
        {
            // do nothing
        }
    }
    x++;
    }
    return count;
}

int main()
{
    while(1)
    {
    char string[100];
    fgets(string,sizeof(string),stdin);
    if(string[0]=='\n')
    {
        break;
    }

    printf("Number of consonants=%i\n",count_consonants(string));
    }
    return 0;
}