/*
CH-230-A
a5_p4.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void divby5(float array[], int size);

int main()
{
    int n;
    scanf("%d",&n);

    float *array;
    array = (float*) malloc(sizeof(float)*n);

    int idx;
    for(idx=0;idx<n;idx++)
    {
        scanf("%f ",&array[idx]);
    }

    printf("before:\n");

    for(idx=0;idx<n;idx++)
    {
        printf("%.3f ",array[idx]);
    }

    divby5(array, n);

    printf("\nafter:\n");

    for(idx=0;idx<n;idx++)
    {
        printf("%.3f ",array[idx]);
    }

    free(array);

    return 0;
}

void divby5(float array[], int size)
{
    int idx;
    for(idx=0;idx<=size;idx++)
    {
        array[idx]= (array[idx])/5.0;
    }
}