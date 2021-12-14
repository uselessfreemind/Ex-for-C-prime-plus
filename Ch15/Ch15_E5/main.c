#include "E5.h"

int main(void)
{
  int test=0;
  scanf("%d",&test);
    printf("%d after left rotation by 4 bits is %u",test,rotate(test,4));
    return 0;
}
