/*
CH-230-A
a4 p9.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n)
{
    int i,max=arr[0],min=arr[0],prodminmax;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return max*min;

}

int main()
{
    int n, *arr, i;
    printf("How many integers?\n");
    scanf("%d",&n);

    arr = (int*) malloc(sizeof(int)*n);
    if(arr == NULL)
    {
        exit(1);
    }

    for(i=0;i<n;i++)
    {
        printf("Input number %d:\n",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Product of the max and min=%d",prodminmax(arr,n));

    return 0;
}