/*
CH-230-A
a3_p4.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done 

#include <stdio.h>
int position(char str[], char c)
{
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
    {
        /* do nothing */
    }
    return idx;
}
int main() 
{
    char line[80];
    while (1) 
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g')+1);
    }
    return 0;
}