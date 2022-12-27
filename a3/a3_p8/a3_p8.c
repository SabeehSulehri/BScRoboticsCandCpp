/*
CH-230-A
a3_p8.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

float sum(float array[],int x)
{
int y;
float sum = 0.0;
if(x<=10)
{
    for(y=0;y<x;y++)
    {
        sum = sum + array[y];
    }
}
return sum;
}

float avg(float array[],int x)
{
float avg= sum(array, x) / x;
return avg;
}

int main()
{
float array[10];
float catch = 0.0 ;
int x=0;

for(x=0;x<10;x++)
{
    scanf("%f",&catch);
    if(catch == -99.0)
    {
        printf("%f\n",sum(array,x));
        printf("%f\n",avg(array,x)); 
    }
    array[x] = catch;
}

printf("%f\n",sum(array,x));
printf("%f\n",avg(array,x));

return 0;
}