#include "E6.h"
void rand0(set_rand * pt_rand,u16 seed)
{
    u16 i;
    srand(seed);
    for(i=0; i<pt_rand->num; i++)
    {
        pt_rand->ar[i]=rand()%(pt_rand->scope)+1;
    }
    stat_rand(pt_rand);
}

void stat_rand(set_rand * pt_stat)
{
    u16 i,j,Ar_Count[pt_stat->scope+1],result=0,k=0;
    for(int i=0; i<pt_stat->scope+1; i++)
    {
        Ar_Count[i]=0;
    }
    for(j=0; j<=10; j++)
    {
        for(i=0; i<pt_stat->num; i++)
        {
            if (pt_stat->ar[i]==result)
            {
                Ar_Count[k]++;
            }
            if (i==pt_stat->num-1)
            {
                result++;
                k++;
            }
        }
    }
    for(i=0; i<=pt_stat->scope; i++)
    {
        printf("%hu occurs %hu times \n",i,Ar_Count[i]);
    }
}


void Up_to_down (set_rand * pt_set)
{
    u16 outer,inner,index;
    u32 temp;
    for(outer=0; outer<=pt_set->num; outer++)
    {
        for(inner=outer+1; inner<=pt_set->num; inner++)
        {
            if (pt_set->ar[outer]>pt_set->ar[inner])
            {
                temp=pt_set->ar[outer];
                pt_set->ar[outer]=pt_set->ar[inner];
                pt_set->ar[inner]=temp;
            }
        }
    }
    /*for(index=0;index<=pt_set->num;index++)
    {
         printf("%u \n",pt_set->ar[index]);
    }
    */
}
