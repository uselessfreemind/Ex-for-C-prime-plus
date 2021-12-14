#ifndef _show_
#define _show_

#include <string.h>
#include <stdio.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 3
struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
extern struct book library[MAXBKS];
void show_info(int x);
#endif // _show_
