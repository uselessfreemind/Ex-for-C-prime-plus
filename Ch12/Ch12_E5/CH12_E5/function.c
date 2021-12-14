#include "E5.h"


void rand0(set_rand * pt_set)
{
  u16 i;

  for(i=0;i<=pt_set->num;i++)
  {
       srand(i);

       pt_set->ar[i]=rand()%(pt_set->scope);
  }

 }

 void Up_to_down (set_rand * pt_set)
 {
   u16 outer,inner,index;
   u32 temp;
    for(outer=0;outer<=pt_set->num;outer++)
    {
        for(inner=outer+1;inner<=pt_set->num;inner++)
        {
            if (pt_set->ar[outer]>pt_set->ar[inner])
            {
                temp=pt_set->ar[outer];
                pt_set->ar[outer]=pt_set->ar[inner];
                pt_set->ar[inner]=temp;
            }
        }
    }
    for(index=0;index<=pt_set->num;index++)
    {
         printf("%u \n",pt_set->ar[index]);
    }

 }
