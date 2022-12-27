/*
CH-230-A
a4 p7.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
//done 

#include <stdio.h>

void printmatrix(int array[30][30],int n)
{
    int row, column;
    for(row=0;row<n;row++)
    {
        for(column=0;column<n;column++)
        {
            printf("%i ", array[row][column]);
        }
        printf("\n");
    }
}

void underdiag(int array[30][30],int n)
{
    int row=0, column=0, count=1;
    for(row=1;row<n;row++)
    {
            for(column=0;column<row;column++)
            {
                printf("%i ", array[row][column]);
            }
    }
}

int main()
{
    int array[30][30];
    int n,row,column;

    printf("Enter an integer:\n");
    scanf("%i",&n);
    while(n>30 && n<0)
    {
        printf("Value entered is invalid\n");
        printf("Enter an integer:\n");
        scanf("%i",&n);
    }

for(row=0;row<n;row++)
{
    for(column=0;column<n;column++)
    {
        scanf("%i",&array[row][column]);
    }
}

printf("The entered matrix is:\n");
printmatrix(array,n);

printf("Under the main diagonal:\n");
underdiag(array,n);

    return 0;
}