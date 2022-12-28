/*
CH-230-A
a7_p1.c
use_linked_list.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"
#include "linked_list.c"

int main()
{
    struct  dllist* my_list = NULL;

    while(1)
    {
        char ch;
        int value;

        scanf("%c",&ch);
        if (ch == 'a' || ch == 'b')
        {
        
            scanf("%d",&value);
        }

        if(ch == 'q')
        {
            exit(1);
        }

        switch (ch)
        {
        case 'a':
            my_list = push_back(my_list , value);
            break;
        
        case 'b':
            my_list = push_front(my_list , value);
            break;

        case 'r':
            my_list = remove_front(my_list);
            break;
        
        case 'p':
            print_list(my_list);
            break;

        case 'q':
            dispose_list(my_list);
            break;

        default:
            break;
        }
    }
}