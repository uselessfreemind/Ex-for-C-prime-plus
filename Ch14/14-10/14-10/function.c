#include "E10.h"

void up2low(unsigned int * n)
{
    unsigned int t;
    unsigned char i,j;
    for(i=0;i<5;i++)
    {
        for(j=1;j<4;j++)
        {
            if(j<i)
            {
                t=i;
                i=j;
                j=t;
            }
        }
    }
}
void show(void (*pf)(unsigned int * n), unsigned int *t)
{
    pf(t);
    printf("%u,%u,%u,%u,%u \n",*t,*(t+1),*(t+2),*(t+3),*(t+4));
}

unsigned char choose(void)
{

}

