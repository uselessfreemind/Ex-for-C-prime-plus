#include "E6.h"

int main(void)
{
    int ar[AR_MAX]={1,2,3,4,5,6,7,8,9,10};
   // qsort(ar,AR_MAX,sizeof(int),Comp);
    printf("Total search %d times",BinSerch(ar,AR_MAX,12));
    return 0;
}
