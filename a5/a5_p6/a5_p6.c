/*
CH-230-A
a5_p6.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    float *arr;
    arr = (float*) malloc(sizeof(float)*n);
    if(arr == NULL)
    {
        exit(1);
    }
    int i=0,x=0;

    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    float *arrptr;
    arrptr = &arr[0];
    while(*arrptr >= 0 && x<n)
    {
        arrptr++;
        count++;
        x++;
    }

    printf("Before the first negative value: %d elements",count);

    free(arr);
    return 0;
}