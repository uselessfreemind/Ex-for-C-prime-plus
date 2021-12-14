#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COL 30
#define ROW 20

char ntoc(int );
void ch2num(FILE *, int (*)[COL]);
void graph_make(int(*)[COL],char (*ar_ch)[COL+1]);
