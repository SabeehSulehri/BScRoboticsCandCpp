/*
CH-230-A
a7_p7.c
stack.h
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

struct stack {
  unsigned int count;
  int array[12];        // Container
};

void push(struct stack* s, int x);
int pop(struct stack* s);
void empty(struct stack* s);
int isEmpty(struct stack* s);

#endif