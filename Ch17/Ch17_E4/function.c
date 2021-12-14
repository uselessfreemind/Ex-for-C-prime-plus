#include "E4.h"

void initializeQueue(Queue * pq)
{
  pq->front=NULL;
  pq->rear=NULL;
  pq->items=0;
}

_Bool QueueIsFull(const Queue * pq)
{
  return (pq->items==MAXQUEUE)?true:false;
}

_Bool QueueIsEmpty(const Queue * pq)
  {
    return (pq->items==0)?true:false;
  }
int QueueItemCount(const Queue * pq)
{
  return pq->items;
}

_Bool EnQueue(Item item,Queue * pq)
{
  Node * new;
  if(QueueIsFull(pq))
    return false;
  new=(Node *)malloc(sizeof(Node));
  if(!new)
  {
    fprintf(stderr,"Unable to allocate memory!\n");
    exit(1);
  }
  CopyToNode(item,pq);
  new->next=NULL;
  if(QueueIsEmpty(pq))
    pq->front=new;
  else
    pq->rear->next=new;
  pq->rear=new;
  pq->items++;
  return false;
}

static void CopyToNode(Item item, Queue * pq)
{
  pq->items=item;
}

static void CopyToItem(Node * pn, Item * pi)
{
  *pi=pn->item;
}

_Bool DeQueue(Item * item, Queue * pq)
{
  Node * pt;
  if(QueueIsEmpty(pq))
    return false;
  CopyToItem(pq->front,item);
  pt=pq->front;
  pq->front=pq->front->next;
  free(pt);
  pq->items--;
  if(pq->items==0)
    pq->rear=NULL;
  return true;
}
void EmptyQueue(Queue * pq)
{
  Item dummy;
  while(!QueueIsEmpty(pq))
    DeQueue(&dummy,pq);
}
