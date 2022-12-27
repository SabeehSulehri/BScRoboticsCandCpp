/*
CH-230-A
a4 p6.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <stdlib.h>

void twogs(int dyn_array[], int n)
{
    int grt, grt2, i;
    grt = dyn_array[0];
    grt2 = dyn_array[0];

    for(i=0;i<n;i++)
    {
        if(dyn_array[i]>grt2)
        {
            if(dyn_array[i]>grt)
            {
                grt2=grt;
                grt=dyn_array[i];
            }
            else
            {
                grt2 = dyn_array[i];
            }
        }
    }
    printf("Greatest value = %d", grt);
    printf("\nSecond greatest value = %d", grt2);
}

int main()
{

    int *dyn_array, n, i;
    printf("how many elements?");
    scanf("%d",&n);
    dyn_array = (int*) malloc(sizeof(int)*n);
    if (dyn_array == NULL)
    {
        exit(1);
    }

    for(i=0;i<n;i++)
    {
        printf("\nInput number %d:",i+1);
        scanf("%d",&dyn_array[i]);
    }
    twogs(dyn_array,n);

    free(dyn_array);

    return 0;
}