/*
CH-230-A
a7_p7.c
stack.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

void push(struct stack *s, int n) 
{
    printf("Pushing %d\n", n);
    s->array[s->count] = n;
    (s->count)++;
}

int pop(struct stack *s) 
{
    int popped;

    popped = s->array[(s->count)-1];
    s->array[(s->count)-1]=0;
    (s->count)--;
    return popped;
}

int isEmpty(struct stack *s) 
{
    return ((s->count)==0);
}

void empty(struct stack *s) 
{
    printf("Emptying Stack ");
    while(!isEmpty(s)){
        printf("%d ", pop(s));
    }
    printf("\n");
}