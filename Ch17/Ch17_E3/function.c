#include "E3.h"

void InitializeList(List * plist)
{
  for(int i=0;i<MAXSIZE;i++)
  {
    plist->entries[i].rating=0;
     strcpy(plist->entries[i].title,"");
  }
  plist->items=0;
  /*
  plist->end=NULL;
  plist->head=plist->end;*/
}

_Bool ListIsEmpty(const List * plist)
{
  return (plist->items)?false:true;
  /*
  if(plist->head==NULL)
    return true;
  else
    return false;
    */
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
  return plist->items;
/*
  Node * temp;
  size_t count=0;
  for(temp=plist->head;
      temp; temp=temp->next)
  {
    if(temp)
      count++;
  }
  Node * pnode=*plist;
  while(pnode!=NULL)
  {
    ++count;
    pnode=pnode->next;
  }
  return count;
  */
}

_Bool AddItem(Item item,List * plist)
{
  if(plist->items>=MAXSIZE)
    return false;
  else{
      strncpy(plist->entries[plist->items].title,item.title,TSIZE);
  plist->entries[plist->items].rating=item.rating;
  plist->items++;
  return true;
  }

  /*
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

  return true;*/

}


void Traverse(const List * plist, void (*pfun)(Item item))
{
  for(size_t i=0;i<plist->items;i++)
    (*pfun)(plist->entries[i]);
  /*
  Node * temp;
  for(temp=plist->head; temp;
      temp=temp->next)
  {
    (*pfun)(temp->item);
  }
  */
}

void EmptyTheList(List * plist)
{
  for(size_t i=0;i<plist->items;i++)
   {
    plist->entries[i].rating=0;
       strcpy(plist->entries[i].title,"");
  }
  plist->items=0;
 /*
  Node * temp,* psave;

  for(temp=plist->head;
  plist->head;
   plist->head=plist->head->next)
  {
    temp=plist->head;
    free(temp);
  }
  */
}

static void CopyToNode(Item item,Node * pnode)
{
  pnode->item=item;
}

void showmovies(Item item)
{
  printf("Movie: %s Rating: %d\n",item.title,item.rating);
}
