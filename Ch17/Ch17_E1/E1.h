#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45


/*
typedef struct{
char title[TSIZE];
int rating;
}Item;

 struct node{
struct node * prev;
struct node * next;
Item data;
};
*/
struct film
{
  char title[TSIZE];
  int rating;
  struct film * next;
  struct film * last;
};

void RevShowFilm(struct film *);
