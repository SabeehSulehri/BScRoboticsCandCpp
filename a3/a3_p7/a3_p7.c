/*
CH-230-A
a3_p7.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

void print_form(int n, int m, char c)
{
    int x;
    for(x=0;x<n;x++)
    {
        int y;
        for(y=0;y<m;y++)
        {
            printf("%c",c);
        }
        m++;
        printf("\n");
    }
}

int main()
{
    int n,m;
    char c;

    scanf("%i%i",&n,&m);
    getchar();
    scanf("%c",&c);

    print_form(n,m,c);
    return 0;
}