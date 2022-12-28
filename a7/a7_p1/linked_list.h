/*
CH-230-A
a7_p1.c
linked_list.h
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/

#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED

struct  list 
{
    int  info;
    struct  list *next;
};

struct  list* push_back(struct  list* my_list , int  value);

struct  list* push_front(struct  list* my_list , int  value);

struct  list* remove_front(struct  list* my_list);

void  print_list(struct  list* my_list);

void  dispose_list(struct  list* my_list);

#endif