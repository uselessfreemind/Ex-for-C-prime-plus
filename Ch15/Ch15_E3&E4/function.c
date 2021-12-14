#include "E3&E4.h"

size_t BitOpen(int x)
{
 size_t num=0;
 for(size_t i=0;i<sizeof(x)*8;i++)
 {
     num+=(x&MASK)?1:0;
     x>>=1;
 }
 return num;
}

_Bool BitPos(int val,int pos)
{

 return (val>>pos)&MASK?1:0;
}
