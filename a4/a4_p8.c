/*
CH-230-A
a4 p8.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done but revise

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

void undersecdiag(int array[30][30],int n)
{
    int row=n, column=n;
    for(row=n;row<=n;row++)
    {
        column = n;
            while(row<column)
            {
                printf("%i ", array[row][column]);
                column--;
            }
    }
}

//function to print numbers under the diagonal
//the numbers under the main diagonal
//are the last col==row-1 numbers in the row
void underdiagonal(int table[30][30], int n) 
{
    for (int idx1 = 0; idx1 < n ; idx1++) 
    {
        for (int idx2 = 0; idx2 < n ; idx2++) 
        {
                if(idx2>(n-idx1-1)) 
                {
                    printf("%d ", table[idx1][idx2]);
                }
        }
    }
}

int main()
{
    int array[30][30];
    int n,row,column;

    printf("Enter an integer:\n");
    scanf("%i",&n);
    while(n>30)
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

printf("Under the secondary diagonal:\n");
underdiagonal(array,n);

    return 0;
}