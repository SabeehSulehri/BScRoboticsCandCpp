/*
CH-230-A
a6_p8.c
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


int main()
{
    struct  list* my_list = NULL;

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
            my_list = remove_front( my_list);
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