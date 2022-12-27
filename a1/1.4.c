/*
CH-230-A
a1_p4.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

int main()
{
    int x = 17, y = 4;
    printf("x=%i\ny=%i\nsum=%i\nproduct=%i\ndifference=%i\n",x,y,x+y,x*y,x-y);

    float division= (float)x/y;
    int remainder= (int)x%y;
    printf("division=%f\nremainder of division=%i",division,remainder);

    return 0;
}
