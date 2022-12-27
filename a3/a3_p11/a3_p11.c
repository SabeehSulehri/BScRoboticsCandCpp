/*
CH-230-A
a3_p11.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <string.h>
#include <stdio.h>

void bpremove (char array[])
{
    for (int idx=0; idx<100; idx++) 
    {
        if (array[idx] == '\n') 
        {
            array[idx] = '\0';
        }
    }
}

int main()
{

    char one[100];
    char two[100];

    fgets(one,sizeof(one),stdin);
    fgets(two,sizeof(two),stdin);

    bpremove(one);
    bpremove(two);

    printf("\n%s",one);
    printf("\n%s",two);

    int alength = strlen(one);
    int blength = strlen(two);

    printf("\nlength1=%i",alength);
    printf("\nlength2=%i",blength);

    printf("\nconcatenation=%s", strcat(one,two));

    char three[100];
    strcpy(three,two);

    printf("\ncopy=%s\n",three);

    if(alength<blength)
    {
        printf("one is smaller than two");
    }
    if(alength>blength)
    {
        printf("one is bigger than two");
    }
    if(alength==blength)
    {
        printf("one is equal to two");
    }

    printf("\n");

    char c;
    scanf("%c",&c);
    int x=0;
    while(x<=100)
    {
        char check = two[x];
        if(c==check)
        {
            printf("position=%i",x);
            break;
        }
        x++;
    }
    if(x==101)
    {
        printf("char not found in string two");
    }

return 0;
}