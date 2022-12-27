/*
CH-230-A
a4 p1.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

float area( float x)
{
    return x*x*3.142;
}

float peri(float x)
{
    return x*2*3.142;
}


int main()
{
    float x, start, final, inc;
    scanf("%f%f%f",&start,&final,&inc);

    for(x=start; x<= final;x+=inc)
    {
        printf("%f %f %f\n",x,area(x),peri(x));
    }

    /*
    x = start;
    while(x<=final)
    {
        printf("%f %f %f\n",x,area(x),peri(x));
        x=x+inc;
    }
    */
   
    return 0;
}