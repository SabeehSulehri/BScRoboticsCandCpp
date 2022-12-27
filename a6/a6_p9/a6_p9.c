/*
CH-230-A
a6_p9.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <stdlib.h>

struct  list 
{
    int  info;
    struct  list *next;
};

int count_list(struct list* my_list)
{
    struct list *p;
    int count = 0;

    for (p = my_list; p; p = p->next) 
    {
        count++;
    }

    return count;
}

struct list* push_inpos(struct list* my_list, int pos, int value)
{
    if ((pos < 0) || (my_list[pos-1].next == NULL))
    {
        printf("Invalid position!\n");
        return my_list;
    }

    struct list *newel;

    newel = (struct list*) malloc(sizeof(struct list));
    if(newel == NULL)
    {
        printf("Error  allocating  memory\n");
        return  my_list;
    }

    newel ->info = value;

    newel ->next = my_list[pos-1].next;
    my_list[pos-1].next = newel;

    return my_list;
}


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

struct list* reverse(struct list* my_list)
{
    struct list *cursor, *rev_list, *temp;
    cursor = my_list;
    rev_list = NULL;
    temp = NULL;

    while(my_list != NULL)
    {
        temp = cursor->next;
        cursor->next =rev_list;
        rev_list = cursor;
        cursor = temp;

    }
    return rev_list;
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


int main()
{
    struct  list* my_list = NULL;

    while(1)
    {
        char ch;
        scanf("%c",&ch);
        int value, pos;
        
        switch (ch)
        {
        case 'i':
            scanf("%d%d",&pos,&value);
            if (pos > count_list(my_list) || pos < 0)
            {
                printf ("Invalid position!\n");
                break;
            }
            my_list = push_inpos(my_list, pos, value);
            break;

        case 'a':
            scanf("%d",&value);
            my_list = push_back(my_list , value);
            break;
        
        case 'b':
            scanf("%d",&value);
            my_list = push_front(my_list , value);
            break;

        case 'r':
            my_list = remove_front( my_list);
            break;
        
        case 'R':
            my_list = reverse(my_list);
            break;

        case 'p':
            print_list(my_list);
            break;

        case 'q':
            dispose_list(my_list);
            exit(1);
            break;

        default:
            break;
        }
    }
}