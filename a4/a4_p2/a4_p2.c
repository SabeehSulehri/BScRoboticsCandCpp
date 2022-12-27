/*
CH-230-A
a4 p2.c
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

int main()
{
    char string[50];
    fgets(string,sizeof(string),stdin);
    bpremove(string);

    int x=0;
    int slength= strlen(string);

    while(x<=slength)
    {
        if(x%2==0)
        {
            printf("%c\n",string[x]);
        }
        else
        {
            printf(" %c\n",string[x]);
        }
    x++;
    }
    return 0;
}