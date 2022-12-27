/*
CH-230-A
a5_p5.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <stdlib.h>

double scalerprod(double v[], double w[], int c)
{
    double prod=0.0, catch=0.0;
    int idx;
    for(idx=0;idx<=(c);idx++)
    {
        catch=v[idx]*w[idx];
        prod= prod + catch;
    }
    return prod;
}

void smallest(double vector[],int n)
{
    double small= vector[0];
    int count = 0;
    int idx;
    for(idx=0;idx<(n);idx++)
    {
        if(vector[idx]<small)
        {
            small = vector[idx];
            count++;
        }
    }
    printf("The smallest=%f\nPosition of the smallest=%i\n",small,count);

}

void largest(double vector[],int n)
{
    double larg= vector[0];
    int count=0;
    int idx;
    for(idx=0;idx<(n);idx++)
    {
        if(vector[idx]>larg)
        {
            larg = vector[idx];
            count++;
        }
    }
    printf("The largest=%f\nPosition of the largest=%i\n",larg, count);
}

int main()
{
    int n;
    scanf("%d", &n);

    double *v, *w;
    v = (double*) malloc(sizeof(double)*n);
    w = (double*) malloc(sizeof(double)*n);

    if(v == NULL)
    {
        exit(1);
    }

    if(w == NULL)
    {
        exit(1);
    }

    int idx;
    for(idx=0;idx<(n);idx++)
    {
        scanf("%lf",&v[idx]);
    }
    for(idx=0;idx<(n);idx++)
    {
        scanf("%lf",&w[idx]);
    }

    printf("Scaler Product=%f\n",scalerprod(v,w,n));

    smallest(v,n);
    largest(v,n);

    smallest(w,n);
    largest(w,n);

    free(v);
    free(w);

    return 0;
}