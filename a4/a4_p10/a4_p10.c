/*
CH-230-A
a4 p10.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    *prod = a*b;
    *div = a/b;
    *pwr = pow(a,b);
    *invb = 1/b;
}

int main()
{
    float a,b,*prod,*div,*pwr,*invb;
    float product, division, power, inverseb; 
    prod = &product;
    div = &division;
    pwr = &power;
    invb = &inverseb;

    scanf("%f%f",&a,&b);

    proddivpowinv(a,b,&product,&division,&power,&inverseb);
    printf("%f\n%f\n%f\n%f\n",product, division, power, inverseb);

    return 0;
}