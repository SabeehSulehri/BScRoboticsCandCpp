/*
CH-230-A
a5_p1.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

void triangle(int n,char ch);

int main()
{
    int n;
    char ch;
    scanf("%d %c",&n,&ch);
    triangle(n,ch);

    return 0;
}

void triangle(int n, char ch)
{
    int x;
    int y;
    for(x=n;x>0;x--)
    {
        y=x;
        while(y>0)
        {
            printf("%c",ch);
            y--;
        }
        printf("\n");
    }
}