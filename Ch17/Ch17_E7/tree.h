#ifndef _TREE_H
#define _TREE_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define STR_LEN 10
#define TREE_LEV 30
#define LEFT 1
#define RIGHT -1
#define MEDIUM 0

typedef struct{
char word[STR_LEN];
int occur_times;
}Item;

typedef struct node{
Item sth;
struct node * left;
struct node * right;
}Node;

typedef struct{
Node * root;
int levels;
}Tree;


typedef struct{
  Node * father;
  Node * child;
}pair;

void TreeInit(Tree *);
_Bool TreeEmpty(Tree *);
_Bool TreeFull(Tree *);
int TreeItemNum(Tree *);
_Bool AddItem(Tree *,Item *);
_Bool DeleteItem(Tree *,Item *);
pair SearchItem(Tree *, const Item *);
void Travers(Node *, void (*pfun)(void *));
int TreeDirtn(Node *, const Item *);
void TreeDraw(Tree *, int);

_Bool AddNode(Node *, Node *);
static Node* MakeNode(Item *);
static void DeleteNode(Node **);

#endif // _TREE_H
