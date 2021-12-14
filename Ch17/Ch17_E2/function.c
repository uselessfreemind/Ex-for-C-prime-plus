#include "E2.h"

void InitializeList(List * plist)
{
  plist->end=NULL;
  plist->head=plist->end;
}

_Bool ListIsEmpty(const List * plist)
{
  if(plist->head==NULL)
    return true;
  else
    return false;
}

_Bool ListIsFull(const List *plist)
{

  Node * pt;
  _Bool full;

  pt=(Node *)malloc(sizeof(Node));
  full=(pt==NULL)?true:false;
  free(pt);
  return full;

}

size_t ListItemCount(const List * plist)
{

  Node * temp;
  size_t count=0;
  for(temp=plist->head;
      temp; temp=temp->next)
  {
    if(temp)
      count++;
  }
  /*
  Node * pnode=*plist;
  while(pnode!=NULL)
  {
    ++count;
    pnode=pnode->next;
  }*/
  return count;
}

_Bool AddItem(Item item,List * plist)
{
  Node * pnew;
  pnew=(Node *)malloc(sizeof(Node));
  if(!pnew)
    return false;
  if(!ListIsEmpty(plist))
  {
    plist->end->next=pnew;
    plist->end=pnew;
  }
  else
  {
    plist->head=pnew;
    plist->end=plist->head;

  }
  CopyToNode(item,pnew);
  pnew->next=NULL;

  return true;
  /*
  Node * scan= *plist;

  pnew=(Node *)malloc(sizeof(Node));
  if(!pnew)
    return false;

  CopyToNode(Item,pnew);
  pnew->next=NULL;
  if(!scan)
    *plist=pnew;
  else
  {
    while(scan->next)
      scan=scan->next;
    scan->next=pnew;
  }
  return true;*/
}


void Traverse(const List * plist, void (*pfun)(Item item))
{
  Node * temp;
  for(temp=plist->head; temp;
      temp=temp->next)
  {
    (*pfun)(temp->item);
  }
  /*
  Node * pnode= *plist;
  while(pnode)
  {
    (*pfun)(pnode->item);
    pnode=pnode->next;}*/
}

void EmptyTheList(List * plist)
{

  Node * temp,* psave;

  for(temp=plist->head;
  plist->head;
   plist->head=plist->head->next)
  {
    temp=plist->head;
    free(temp);
  }
  /*
  while(*plist)
  {
  psave=(*plist)->next;
  free(*plist);
   *plist=psave;
  }*/
}

static void CopyToNode(Item item,Node * pnode)
{
  pnode->item=item;
}

void showmovies(Item item)
{
  printf("Movie: %s Rating: %d\n",item.title,item.rating);
}
