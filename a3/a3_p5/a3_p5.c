/*
CH-230-A
a3_p5.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>

int main()
{
    char c;
    int n, i;
    double sum = 0;
    double T[100];
    double catch = 0;
    double F;
    double avg;
    scanf("%c%d",&c,&n);

    for(i=0; i<n; i++)
    {
        scanf("%lf",&catch);
        T[i] = catch;
    }
    catch = 0;
    switch (c)
    {
    case 's':
    for(i=0; i<n; i++)
    {
        sum = sum + T[i];
    }
    printf("%lf\n",sum);
    break;

    case 'p':
    for(i=0; i<n; i++)
    {
        printf("%lf\n",T[i]);
    }
    break;

    case 't':

    for(i=0; i<n; i++)
    {
        printf("%lf\n",((T[i]*(9.0/5.0))+32.0) );
    }

    break;

    default:
    for(i=0; i<n; i++)
    {
        sum = sum + T[i];
    }
    avg = sum / n;
    printf("%lf",avg);
    break;
    }

    return 0;
}