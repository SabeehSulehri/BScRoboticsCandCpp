/*
CH-230-A
a2_p9.c
Sabeeh Sulehri
ssulehri@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char s;
    scanf("%c",&s);

    if(s>=65 && s<=90) // or if(s>='A' && s<='Z')
{
    printf("%c is a letter",s);
}
    else if(s>=97 && s<=122) // or if(s>='a' && s<='z')
{
    printf("%c is a letter",s);
}
    else if(s>=48 && s<=57)
{
    printf("%c is a digit",s);
}
    else
{
    printf("%c is a symbol",s);
}
    return 0;
}