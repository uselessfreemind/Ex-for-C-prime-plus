#include "E4.h"


double Time_Delay(time_t in)
{
  double t_diff=0;
  clock_t before,after;
  time_t temp1=0,temp2=0;
  time_t diff=0;
  before=clock();
  while(diff<=in)
  {
    temp1=time(&temp1);
    temp2=time(&temp2);
    diff+=temp2-temp1;
  }
  after=clock();
  t_diff=(after-before)/CLOCKS_PER_SEC;
  return t_diff;
}
