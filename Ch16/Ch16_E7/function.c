#include "E7.h"

void ShowArray(const double ar[],int n)
{
  for(int i=0; i<n; i++)
  {
    printf("%.2f, ",ar[i]);
    if(i==4)
      putchar('\n');
    }
}

double * NewDArray(int n,...)
{
  double * temp=(double *)malloc(sizeof(double)*n);
  va_list dat;
  va_start(dat,n);
  for(int i=0;i<n;i++)
  {
    temp[i]=va_arg(dat,double);
  }
  va_end(dat);
  return temp;
}
