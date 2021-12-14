#ifndef _E5_H
#define _E5_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define STK_SIZE 10
#define STR_LEN 10

typedef struct{
char alphabet;
int num;
}Item;

typedef struct level{
Item sth;
struct level * next;
}Level;// each level of chain stack

typedef struct{
Level * top;
int lv_num;
}Stack;

void StackInit(Stack *);
_Bool StackIsEmpty(Stack *);
_Bool StackIsFull(Stack *);
int StackPush(Stack *, Level * );
void StackPop(Stack *, Level *);
void StackFailFull(void);
void StackSuc(void);

#endif // _E5_H
