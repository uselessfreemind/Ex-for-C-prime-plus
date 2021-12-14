
#include <stdio.h>
#include <stdlib.h>

#define u32 unsigned int
#define u16 unsigned short
#define u8 unsigned char
#define NUM 1000

typedef struct
{
    u16 scope;
    u16 num;
    u32  ar[NUM];
}set_rand;

void rand0(set_rand * , u16 );
void Up_to_down (set_rand* );
void stat_rand(set_rand * );

