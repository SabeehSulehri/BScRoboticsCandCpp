/*
CH-230-A
a7_p2.c
Sabeeh Sulehri
s.sulehri@jacobs-university.de
*/
// done

#include <stdio.h>
#include <stdlib.h>

struct dllist {
    char info;
    struct dllist *next;
    struct dllist *previous;
};

struct dllist* push_front(struct dllist* my_list, char ch)
{
    struct dllist *newel;

    newel = (struct dllist*) malloc(sizeof(struct dllist));
    if(newel == NULL)
    {
        printf("Error  allocating  memory\n");
        return my_list;
    }

    if(my_list == NULL)
    {
        newel->info=ch;
        newel->next=NULL;
        newel->previous=NULL;

        return newel;
    }

        newel->info = ch;
        newel->next = my_list;
        my_list->previous = newel;
        newel->previous = NULL;

        return newel;
}

struct dllist* remove_char(struct dllist* my_list, char ch)
{
    struct dllist *cursor, *p, *n;
    p = NULL;
    n = NULL;
    cursor = my_list;
    int count=0;

    if(my_list == NULL)
    {
        return my_list;
    }

    for(cursor = my_list; cursor; cursor = cursor->next)
    {
        p=cursor->previous;
        n=cursor->next;

        if(cursor->info == ch)
        {
            if(p == NULL)
            {
                cursor->previous=NULL;
                cursor->next=NULL;
                n->previous=NULL;
                my_list=n;
                cursor=n;
                count++;
            }
            else if(n == NULL)
            {
                cursor->previous=NULL;
                cursor->next=NULL;
                p->next=NULL;
                count++;
                break;
            }
            else
            {
                p->next=n;
                n->previous=p;
                cursor->next=NULL;
                cursor->previous=NULL;
                cursor = n;
                count++;
            }
        }
    }

    if(count == 0)
    {
        printf("The element is not in the list!\n");
    }

    return my_list;
}

void print_list(struct dllist* my_list)
{
    struct dllist *p;
    for(p = my_list; p; p= p->next)
    {
        printf("%c ",p->info);
    }
}

void print_list_backwards(struct dllist* my_list)
{
    struct dllist *p;
    for(p = my_list; p; p = p->next) 
    {
        if(p->next == NULL)
        {
            break;
        }
    }

    while(p != NULL)
    {
        printf("%c ", p->info);
        p = p->previous;
    }
}

void dispose_list(struct dllist* my_list)
{
    struct  dllist *nextelem;
    while (my_list  != NULL)
    {
        nextelem = my_list ->next;
        free(my_list);
        my_list = nextelem;
    }
}

int main()
{
    struct  dllist* my_list = NULL;
    int x;
    char ch;

    while(1)
    {
        scanf("%d",&x);
        getchar();

        switch (x)
        {
        case 1:
            /* will add char to the start of the list */
            scanf("%c",&ch);
            my_list = push_front(my_list, ch);
            break;
        
        case 2:
            /* removes the char from the whole list */
            scanf("%c",&ch);
            my_list = remove_char(my_list, ch);
            break;
        
        case 3:
            /* print */
            print_list(my_list);
            printf("\n");
            break;
        
        case 4:
            /* print backwards */
            print_list_backwards(my_list);
            printf("\n");
            break;
        
        case 5:
            /* empty list, free memory, exit program */
            dispose_list(my_list);
            return 0;
            break;

        default:
            break;
        }

    }
    return 0;
}