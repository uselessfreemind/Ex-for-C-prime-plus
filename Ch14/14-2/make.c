#include "make.h"
void make_info(struct daily * pt)
{

    puts("Enter the days");
    if((scanf("%d",&(pt->days))==1)&&(pt->days>0))
    {
        puts("Enter the months");
    if(scanf("%d",&(pt->months))==1&&(pt->months>0))
    {
      puts("Enter the years");
        if(scanf("%d",&(pt->years))==1&&(pt->years>0))
        {
            return;

        }
    }
    }


}

int calculate(struct daily * pt)
{
    unsigned char i;
   if(pt->months<=2)
            {
                return (pt->months==1)?pt->days:(month_day[0]+pt->days);
            }
    else
        {
                for(i=1;i<pt->months;i++)
                {
                    total_day+=month_day[i-1];
                }
                 total_day+=pt->days;
                return (pt->years%4)?total_day:(total_day+1);
        }

}

