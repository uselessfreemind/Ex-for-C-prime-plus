#ifndef _function_h
#define _function_h
#include "E7.h"
#define u32 unsigned int


void MainMenu(Tree *);
void InsertItem(Tree *);
void SingleDel(Tree *);
void AllDel(Tree *);
void ReadIn(Tree *,FILE *);
u32 WordCnt(Tree *);
#endif // _function_h
