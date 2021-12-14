#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

#define u16 unsigned short
#define u32 unsigned int



typedef struct
{
    u32  * const ar;
    u16 scope;
    u16 num;
}set_rand;

void rand0(set_rand *);

void Up_to_down (set_rand* );
