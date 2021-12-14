#ifndef _E3_H
#define _E3_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define TSIZE 45
#define MAXSIZE 100

typedef struct{
char title[TSIZE];
int rating;
}Item;

typedef struct node{
Item item;
struct node * next;
}Node;

typedef struct{
Item entries[MAXSIZE];//max 100 lists
int items;//0~MAXSIZE
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

#endif // _E3_H

