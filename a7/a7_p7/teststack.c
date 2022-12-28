/*
CH-230-A
a7_p7.c
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
    char ch;

    s = &stack;
    s->count = 0;

    while(1)
    {
        scanf("%c", &ch);

        switch(ch)
        {

            case 's':
                if(s->count>=12) 
                {
                    printf("Pushing Stack Overflow\n");
                }
                else 
                {
                    int n;
                    scanf("%d", &n);
                    push(s, n);
                }
                break;

            case 'p':
                if(s->count<=0)
                {
                    printf("Popping Stack Underflow\n");
                }
                else
                {
                    printf("Popping %d\n", pop(s));
                }
                break;

            case 'e':
                empty(s);
                break;

            case 'q':
                printf("Quit\n");
                exit(0);
                break;
        }
    }

    return 0;
}