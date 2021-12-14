#include "E6.h"

int Comp(const int * v1,const int * v2)
{
  return (*v1>*v2)?1:0;
}

int BinSerch(int * ar,size_t quant,int num_sch)
{
  int search_times=0,border_end=quant-1,border_head=0,
  sch_max=1+log((double)quant)/log((double)2);
  while(sch_max--)
  {
    search_times++;
    if(num_sch==ar[(border_head+border_end)/2])
      break;
    else if(num_sch==ar[border_end])
      break;
    else
    {
      if(num_sch<ar[(border_head+border_end)/2])
        border_end=(border_head+border_end)/2;
      else
        border_head=(border_head+border_end)/2;
    }
  }
  return search_times;
}

