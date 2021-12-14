#include "E4.h"

int main(void)
{
  Queue line;
  Item temp;
  int hours,phour,wait_time=0;;
  long cycle, cyclelimit;
  long turnaway=0,customers=0,served=0,sum_line=0;
  double min_per_cust;//顾客到来的平均时间
  long line_wait=0;//队列累计等待时间

  initializeQueue(&line);
  srand(time(0));
  puts("Case study: Sigmund Lander's Advice Booth");
  puts("Enter the number of simulation hours: ");
  scanf("%d",&hours);
  cyclelimit=MIN_PER_HR * hours;
  min_per_cust=MIN_PER_HR/phour;

  for(cycle=0; cycle<cyclelimit; cycle++)
  {
    if(newcustomer(min_per_cust))
    {
      if(QueueIsFull(&line))
        turnaway++;
      else
      {
        customers++;
        temp=customertime(cycle);
        EnQueue(temp,&line);
      }
    }
    if(wait_time<=0 && !QueueIsEmpty(&line))
    {
      DeQueue(&temp,&line);
      wait_time=temp.processtime;
      line_wait+=cycle-temp.arrive;
      served++;
    }
    if(wait_time>0)
      wait_time--;
    sum_line+=QueueItemCount(&line);
  }
  if(customers>0)
  {
    printf("Customers accepted: %ld\n",customers);
    printf("  Customers served: %ld\n",served);
    printf("     turnaways: %ld\n",turnaway);
    printf("average queue size: %.2f\n",
           (double)sum_line/cyclelimit);
    printf(" average wait time: %.2f minutes\n",
           (double)line_wait/served);
  }
  else
    puts("No customers!");
  EmptyQueue(&line);
  puts("Bye!");

  return 0;
}
