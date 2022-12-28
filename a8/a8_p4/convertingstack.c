/*
CH-230-A
a8_p4.c
teststack.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main()
{
    struct stack *s;
    struct stack stack;
    int n;

    s = &stack;
    s->count = 0;

    printf("Insert an unsigned integer:\n");
    scanf("%d", &n);

    inttobin(s, n);

    printf("The binary representation of %d is ", n);

    while(!isEmpty(s))
    {
        printf("%d", pop(s));
    }
    printf(".\n");

    return 0;
}