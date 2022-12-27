/*
CH-230-A
a4 p4.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <string.h>

void bpremove (char array[])
{
    for (int idx=0; idx<100; idx++) 
    {
        if (array[idx] == '\n') 
        {
            array[idx] = '\0';
        }
    }
}

int count_consonants(char string[])
{
    int x=0,count=0;
    while(x<strlen(string))
    {
        if(string[x]>='A' && string[x]<='Z' || string[x]>='a' && string[x]<='z')
        {
    if(string[x]!=97 && string[x]!=101 && string[x]!=105 && string[x]!=111 &&
    string[x]!=117 && string[x]!=65 && string[x]!=69 && string[x]!=73 &&
    string[x]!=79 && string[x]!=85 && string[x]!='\n' && string[x]!=' ')
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
    // bpremove(string);
    printf("Number of consonants=%i\n",count_consonants(string));
    }
    return 0;
}