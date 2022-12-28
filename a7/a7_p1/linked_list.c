/*
CH-230-A
a7_p1.c
linked_list.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

struct  list* push_back(struct  list* my_list , int  value) 
{
    struct  list *cursor , *newel;
    cursor = my_list;
    newel = (struct  list *)  malloc(sizeof(struct  list));
    if (newel  == NULL) 
    {
        printf("Error  allocating  memory\n");
        return  my_list;
    }
    newel ->info = value;
    newel ->next = NULL;
    if (my_list  == NULL)
    {
        return  newel;
    }
    while (cursor ->next != NULL)
    {
        cursor = cursor ->next;
    }
    cursor ->next = newel;
    return  my_list;
}


struct  list* push_front(struct  list* my_list , int  value) 
{
    struct  list *newel;
    newel = (struct  list *)  malloc(sizeof(struct  list));
    if (newel  == NULL) 
    {
        printf("Error  allocating  memory\n");
        return  my_list;
    }
    newel ->info = value;
    newel ->next = my_list;
    return  newel;
}

struct  list* remove_front(struct  list* my_list) 
{
    struct  list *nextelem;
    nextelem = my_list ->next;
    free(my_list);
    my_list = nextelem;
    
}

void  print_list(struct  list* my_list) 
{
    while (my_list  != NULL) 
    {
        printf ("%d ", my_list ->info);
        my_list = my_list ->next;
    }
    printf("\n");
}

void  dispose_list(struct  list* my_list) 
{
    struct  list *nextelem;
    while (my_list  != NULL) 
    {
        nextelem = my_list ->next;
        free(my_list);
        my_list = nextelem;
    }
}