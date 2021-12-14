
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LEN 50

typedef struct

{    size_t noun;
    size_t cap;
    size_t little;
    size_t comma;
    size_t number;
}stat;

stat * report(char *,stat *);

