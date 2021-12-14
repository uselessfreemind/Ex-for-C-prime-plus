#include "make.h"
int month_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int total_day=0;
int main(void)
{

struct daily info;
struct daily * p;

p=&info;
while(1)
{
    make_info(p);
    printf("Total days are %d \n",calculate(p));
}
    return 0;
}
