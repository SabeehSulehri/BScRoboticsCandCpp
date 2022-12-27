/*
CH-230-A
a5_p8.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done but revise

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void matscan(int **matrix, int x, int y)
{
    for(int i1=0; i1<x; i1++)
    {
        for(int i2=0; i2<y; i2++)
        {
            scanf("%d",&matrix[i1][i2]);
        }
    }
}

void matprint(int **matrix, int x, int y)
{
    for(int i1=0; i1<x; i1++)
    {
        for(int i2=0; i2<y; i2++)
        {
            printf("%d",matrix[i1][i2]);
        }
        printf("\n");
    }
}

void matmult(int **matrixa, int **matrixb, int **matrixc, int x, int y, int z)
{
    for (int row = 0; row < x; row++) 
    {
        for(int col=0; col < z; col++) 
        {
            matrixc[row][col] = 0;
            for (int j=0; j<y; j++) 
            {
                matrixc[row][col] = matrixc[row][col] + (matrixa[row][j]*matrixb[j][col]);
            }
        }
    }
}

int main()
{
    int **A, **B, **C;
    int n,m,p,i;
    scanf("%d%d%d",&n,&m,&p);
    //printf("%d\n%d\n%d\n",n,m,p);

    A= (int**) malloc(sizeof(int*)*(n));
    for(i=0;i<m;i++)
    {
        A[i]= (int*) malloc(sizeof(int)*m);
    }
    if(A == NULL)
    {
        exit(1);
    }

    B= (int**) malloc(sizeof(int*)*(m));
    for(i=0;i<p;i++)
    {
        B[i]= (int*) malloc(sizeof(int)*p);
    }
    if(B == NULL)
    {
        exit(1);
    }

    C= (int**) malloc(sizeof(int*)*n);
    for(i=0;i<p;i++)
    {
        C[i]=(int*) malloc(sizeof(int)*p);
    }
    if(C == NULL)
    {
        exit(1);
    }

    matscan(A,n,m);
    matscan(B,m,p);

    printf("Matrix A:\n");
    matprint(A,n,m);
    printf("Matrix B:\n");
    matprint(B,m,p);

    matmult(A,B,C,n,m,p);

    printf("The multiplication result AxB:\n");
    matprint(C,n,p);    

    for (int i = 0; i < n; i++) {
        free(A[i]);
    }
    free(A);

    for (int j = 0; j < m; j++) {
        free(B[i]);
    }
    free(B);

    for (int k = 0; k < n; k++) {
        free(C[i]);
    }
    free(C);

    return 0;
}
