#include "E6.h"

int main(void)
{
  u8 conter;
 static u16 seed;
  set_rand random;
  printf("Enter the random number's quantity\n");
     scanf("%hu",&random.num);
     printf("Enter the scope of random number\n");
     scanf("%hu",&random.scope);
  for(conter=0;conter<=9;conter++)
  {
     printf("Enter the seed\n");
     scanf("%hu",&seed);
     rand0(&random,seed);
  }

    return 0;
}
