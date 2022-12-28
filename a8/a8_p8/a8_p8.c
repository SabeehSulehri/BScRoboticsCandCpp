/*
CH-230-A
a8_p8.c
Sabeeh Sulehri 
s.sulehri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char name[50];
    char ch;
    int count = 0;

    printf("insert the name of your file:\n");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = "\0";

    f = fopen(name,"r");
    if(f == NULL)
    {
        printf("error opening file %s.",name);
        exit(1);
    }

	while((ch = fgetc(f)) != EOF) 
    {
        if(ch == ' ' || ch == ',' || ch == '?' || ch == '!' || ch == '.' || ch == '\t' || ch == '\r' || ch == '\n')
        {
            while((ch = fgetc(f)) != EOF)
            {
                if(ch == ' ' || ch == ',' || ch == '?' || ch == '!' || ch == '.' || ch == '\t' || ch == '\r' || ch == '\n')
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            count++;
        }
    }

    printf("The number of words in the file %s is %d", name, count);

    fclose(f);
    return 0;
}