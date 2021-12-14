#include "E5.h"

int rotate(unsigned int x,size_t bits)
{
  int temp=0;
  temp|=(x>>(sizeof(x)*8-bits));
  x<<=bits;
  temp|=x;
  return temp;
}
