#include "de.h"

int main(void)
{
u8 call,i;

  puts("How many times of calling?");
  scanf("%u",&call);
  for(i=0;i<call;i++)
      {

   printf("%d times in all\n",Count_call());
  }
    return 0;
}
 int Count_call(void)
{
    static int times=0;
     return ++times;
}
