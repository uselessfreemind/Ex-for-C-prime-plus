#include "E5.h"

int main(void)
{
    set_rand demo;
   puts("Enter the number of the series");
   scanf("%hu",&demo.num);
   printf("number is %u, please enter the scope\n",demo.num);
   scanf("%hu",&demo.scope);
   printf("scope is %u, please enter the seed\n",demo.scope);
   /*
   scanf("%u",&seed);
   printf("seed is %u \n",seed);
   */
   rand0(&demo);
   Up_to_down (&demo);
    return 0;
}
