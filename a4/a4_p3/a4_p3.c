/*
CH-230-A
a4 p3.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done 

#include <stdio.h>

float geometric_mean(float arr[], int num)
{
    float gmean = 0;
    int idx;

    for(idx=0;idx<=num;idx++)
    {
        gmean = gmean + arr[idx];
    }

    gmean = (gmean / (gmean*num));
    return gmean;
}

float highest(float arr[], int num)
{
    int idx;
    float highest = arr[0];

    for(idx=0;idx<=num;idx++)
    {
        if(arr[idx]>highest)
        {
            highest = arr[idx];
        }
    }

    return highest;
}

float smallest(float arr[], int num)
{
    int idx;
    float smallest = arr[0];

    for(idx=0;idx<=num;idx++)
    {
        if(arr[idx]<smallest)
        {
            smallest = arr[idx];
        }
    }

    return smallest;
}

float sum(float arr[], int num)
{
    float sum = 0;
    int idx;

    for(idx=0;idx<=num;idx++)
    {
        sum = sum + arr[idx];
    }

    return sum;
}

int main()
{
    float array[15];
    int idx;
    char ch;

    for (idx=0; idx<15; idx++) 
    {
        scanf("%f", &array[idx]);
        if (array[idx]<0) 
        {
            array[idx] = '0';
            idx--;
            break;
        }
    }

    printf("now enter a char out of: m,h,l, or s\n");
    getchar();
    scanf("%c",&ch);

    switch (ch)
    {
    case 'm':
        printf("%f\n",geometric_mean(array,idx));
        break;
    
    case 'h':
        printf("%f\n",highest(array,idx));
        break;

    case 'l':
        printf("%f\n",smallest(array,idx));
        break;

    case 's':
        printf("%f\n",sum(array,idx));
        break;

    default:
        break;
    }

    return 0;
}