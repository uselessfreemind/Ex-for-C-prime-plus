#ifndef _make_
#define _make_


#include <stdio.h>
#include <string.h>


 struct daily
 {int days;
 int years;
 int months;
 };

 extern int month_day[12];
 extern int total_day;

void make_info(struct daily * pt);
int calculate(struct daily * pt);

#endif // _make_h
