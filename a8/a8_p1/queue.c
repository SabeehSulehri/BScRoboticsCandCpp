/*
CH-230-A
a8 p1.c 
queue.c
Sabeeh Sulehri 
s.sulehri@jacobs-university.de
*/

/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	// add missing stuff
    if (queue_is_full(pq)==1) 
    {
        return -1;
	}
    else
    {
        Node *newnode;
        newnode = (Node*) malloc (sizeof(Node));
        if(newnode == NULL)
        {
            exit(1);
        }

        newnode->item=item;
        newnode->next=NULL;

        if (queue_is_empty(pq)==1) 
        {
            pq->front = newnode;
            pq->rear = newnode;
            (pq->items)++;
        }
        else
        {
            (pq->rear)->next= newnode;
            pq->rear= newnode;
            (pq->items)++;
        }
    }
    
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	// add missing stuff
        return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}