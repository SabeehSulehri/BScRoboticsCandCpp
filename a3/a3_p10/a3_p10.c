/*
CH-230-A
a3_p10.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done 

#include <stdio.h>

float product(float a, float b)
{
return a*b;
}

void productbyref(float a, float b, float *p)
{
*p = a*b;
}

void modifybyref(float *a, float *b)
{
*a=*a+3;
*b=*b+11;
}


int main()
{
float a,b;
float productab;
float p;

scanf("%f%f",&a,&b);

printf("%f\n",product(a,b));

productbyref(a,b,&p);
printf("%f\n",p);

modifybyref(&a,&b);
printf("%f\n",a*b);

    return 0;
}