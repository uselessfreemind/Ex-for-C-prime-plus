#ifndef _E2_H
#define _E2_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TSIZE 45

typedef struct{
char title[TSIZE];
int rating;
}Item;

typedef struct node{
Item item;
struct node * next;
}Node;

typedef struct{
Node * head;
Node * end;
}List;

void InitializeList(List *);
_Bool ListIsEmpty(const List *);
_Bool ListIsFull(const List *);
size_t ListItemCount(const List *);
_Bool AddItem(Item,List *);
void Traverse(const List *, void (*pfun)(Item));
void EmptyTheList(List *);
static void CopyToNode(Item,Node *);
void showmovies(Item);

#endif // _E2_H
