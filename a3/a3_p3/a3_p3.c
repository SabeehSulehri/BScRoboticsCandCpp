/*
CH-230-A
a3_p3.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

float convert(int cm)
{
    return (float)cm/100000;
}

int main()
{
    int cm;
    scanf("%i",&cm);
    float km= convert(cm);
    printf("Result of conversion: %f",km);

    return 0;
}