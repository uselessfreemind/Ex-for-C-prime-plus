#include "E5.h"

void RandomPrt(int * ar,size_t size,size_t num)
{
  if(num<size)
  {
    int rdm_elmt=0;
    time_t t_seed;

    int * temp=(int *)malloc(sizeof(int)*size);//to store the raw array
    int * waste=(int *)malloc(sizeof(int)*size);//to store the chosen element
    int * pt_waste=waste;
    temp=memcpy(temp,ar,sizeof(int)*size);
    /* for(int i=0; i<size; i++)
     {
        temp[i]=ar[i];
     }*///copy raw array
    for(int i=0; i<size; i++)
      waste[0]=0;//initiate the waste array
    srand(time(&t_seed));
    for(int j=0; j<num; )
    {
      rdm_elmt=rand()%size;//generate random element's offset
      if(IsContain(waste,size,rdm_elmt))
        continue;// if offset was generated
      printf("the random element of raw array is %d\n",ar[rdm_elmt]);
      *pt_waste++=rdm_elmt;//put random element's offset into waste pool
      j++;
    }


    free(temp);
    free(waste);
  }
  else
  {
    atexit(reg_exit);
    exit(1);
  }
}

_Bool IsContain(int * in,size_t size,int elmt)
{
  for(int i=0; i<size; i++)
  {
    if(in[i]==elmt)
      return 1;
  }
  return 0;
}

void reg_exit(void)
{
  fprintf(stderr,"Failed,the random element quantity is greater than array size\n");
}

void norm_end(void)
{
  fprintf(stdout,"Successfully generate specified number of random element\n");
}
