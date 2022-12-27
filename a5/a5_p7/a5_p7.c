/*
CH-230-A
a5_p7.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bpremove(char string[])
{
    for(int x = 0; x<=strlen(string);x++)
    {
        if(string[x] == '\n')
        {
            string[x] = '\0';
        }
    }
}

int main()
{
    char a[100], b[100], c[200], *conc;

    fgets(a,100,stdin);
    fgets(b,100,stdin);

    int exactlength = strlen(a)+strlen(b)-2;

    conc = (char*) malloc(sizeof(char)*exactlength);
    bpremove(a);
    bpremove(b);

    strcpy(c,a);
    strcat(c,b);
    strcpy(conc,c);
    printf("Result of concatination: %s\n",conc);

    free(conc);

    return 0;
}