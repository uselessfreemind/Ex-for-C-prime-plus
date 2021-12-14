#ifndef _E4_H
#define _E4_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAXQUEUE 10
#define MIN_PER_HR 60.0

typedef struct{
long arrive;
int processtime;
} Item;

typedef struct node{
Item item;
struct node * next;
}Node;

typedef struct{
Node * front;
Node * rear;
int items;
}Queue;

void initializeQueue(Queue *);
_Bool QueueIsFull(const Queue *);
_Bool QueueIsEmpty(const Queue *);
int QueueItemCount(const Queue *);
_Bool EnQueue(Item,Queue *);
_Bool DeQueue(Item *, Queue *);
void EmptyQueue(Queue *);
static void CopyToNode(Item, Queue *);
static void CopyToItem(Node *, Item *);
#endif // _E4_H

