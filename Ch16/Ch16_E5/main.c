#include "E5.h"

int main(void)
{

  atexit(norm_end);
    int org[SIZE];
    for(int i=0;i<SIZE;i++)
      org[i]=i+1;
   RandomPrt(org,SIZE,6);
    return 0;
}


