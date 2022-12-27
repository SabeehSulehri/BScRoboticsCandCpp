/*
CH-230-A
a3_p6.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

float to_pounds(int kg, int g)
{
    float v = (float)kg*2.2+(float)g*0.0022;
    return v;
}

int main()
{
    int kg,g;
    scanf("%d %d", &kg,&g);
    float v;
    v = to_pounds(kg,g);
    printf("Result of coversion: %f", v);

    return 0;
}