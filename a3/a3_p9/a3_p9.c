/*
CH-230-A
a3_p9.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

int n,idx;
double v[20];
double sum = 0;
double catch = 0;

double sum25(double v[], int n)
{
if(n<5) 
    {
    printf("There is no coresponding value");
    return -111;
    }
if(n>=5)
    {
    double pos2 = v[2];
    double pos5 = v[5];
    double sum = pos2 + pos5 ;

    printf("sum=%lf",sum);
    return sum;
    }
}

int main ()
{

scanf("%i", &n);

while(n>20)
{
scanf("%i", &n);
}

for(idx=0;idx<n;idx++)
{
    scanf("%lf", &catch);
    v[idx] = catch;
}

sum25(v,n);
return 0;
}