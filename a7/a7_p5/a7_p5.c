/*
CH-230-A
a7_p5.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <stdlib.h>

int ascending(const void *va, const void *vb) {
    const int *a = (const int *) va;
    const int *b = (const int *) vb;
    if (*a < *b) return -1;
    else if (*a > *b) return 1;
    else return 0;
}

int descending(const void *va, const void *vb) {
    const int *a = (const int *) va;
    const int *b = (const int *) vb;
    if (*a > *b) return -1;
    else if (*a < *b) return 1;
    else return 0;
}

void print_array(int* array, int n)
{
    int idx;
    for(idx = 0; idx < n; idx++)
    {
        printf("%d",array[idx]);
    }
    printf("\n");
}


int main()
{
    int n, *array;
    char ch;

    int (*ascndptr) (const void*, const void*);
    int (*dscndptr) (const void*, const void*);

    ascndptr = ascending;
    dscndptr = descending;

    scanf("%d",&n);

    array=(int*) malloc(sizeof(int)*(n));
    if(array == NULL)
    {
        exit(1);
    }

    for(int idx=0;idx<n;idx++)
    {
        scanf("%d",&array[idx]);
    }
    printf("\n");

    while(1)
    {
        scanf("%c",&ch);

        switch (ch)
        {
        case 'a':
            qsort(array, n, sizeof(int), ascndptr);
            print_array(array, n);
            break;

        case 'd':
            qsort(array, n, sizeof(int), dscndptr);
            print_array(array, n);
            break;

        case 'e':
            free(array);
            exit(0);
            break;
        }

    }
    return 0;
}