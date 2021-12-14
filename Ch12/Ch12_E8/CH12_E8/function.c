#include "E8.h"

int * make_array_malloc(int elem, int val)
{
   int * init_elem, * offset;

   init_elem=(int *)malloc(sizeof(int)*elem);
   offset=init_elem;
    for(u16 count=0;count<elem;count++,offset++)
    {
        *offset=val;
    }

    return init_elem;
}
void show_array(const int * ar , u8 num_row)
{
  for(u8 i=1;i<=num_row;i++)
  {
      printf("%d ",*ar++);
      if (i%8==0)
         printf("\n");


  }
}
