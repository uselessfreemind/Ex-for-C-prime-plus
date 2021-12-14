#include "E3&E4.h"
int main(void)
{
   int test=0;

   puts("Enter the test value");
   while(scanf("%d",&test)==1)
   {
     printf("There are %u bits open in %d\n",BitOpen(test),test);
    printf("Bit %d is %d",10,BitPos(test,10));
    if(test=='q')
      break;
   }
    return 0;
}
