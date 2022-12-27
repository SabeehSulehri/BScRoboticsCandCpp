/*
CH-230-A
a4 p11.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int countinsensitive(char *str, char c)
{
    int n, count=0;
    for(n=0;n<strlen(str);n++)
    {
        if(str[n] == c || str[n] == tolower(n) || str[n] == toupper(n))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char *strdyn,c;
    int n,i;
    printf("Enter the length of string(must be below 50)");
    scanf("%d",&n);
    while(n>50)
    {
        scanf("%d",&n);
    }

    strdyn= (char*) malloc(sizeof(char)*n);
    if(strdyn == NULL)
    {
        exit(1);
    }

    for(i=0;i<n;i++)
    {
        printf("\nEnter char number %d: ", i +1);
        getchar();
        scanf("%c",&strdyn[i]);
    }

    printf("Enter the char to be searched:");
    getchar();
    scanf("%c",&c);

    char string[n], *str;
    strcpy(string,strdyn);

    free(strdyn);
    
    //for(i=0;i<n;i++)
    //{
    //    if(string[i] == '\n')
    //    {
    //        string[i] == '0';
    //        n--;
    //    }

    //}

    //printf("%s\n%d\n", string, strlen(string));

    printf("The character %c occurs %d times", c, countinsensitive( string, c));

    return 0;
}