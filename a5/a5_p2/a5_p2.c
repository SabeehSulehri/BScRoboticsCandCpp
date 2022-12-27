/*
CH-230-A
a5_p2.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <string.h>

void divby5(float array[], int size);

int main()
{
float array[100]= {5.5,6.5,7.75,8.0,9.6,10.36};
int size = strlen(array);
int idx;
printf("before:\n");

for(idx=0;idx<=5;idx++)
{
    printf("%.3f ",array[idx]);
}
divby5(array,5);
printf("\nafter:\n");

for(idx=0;idx<=5;idx++)
{
    printf("%.3f ",array[idx]);
}

    return 0;
}

void divby5(float array[], int size)
{
int idx;
for(idx=0;idx<=5;idx++)
{
    array[idx]= (array[idx])/5.0;
}
}