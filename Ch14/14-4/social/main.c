#include <stdio.h>
#include <string.h>
#include "social.h"
int main(void)
{
 struct social_insu temp;
 input(&temp);
 output(&temp);
 return 0;
}

void input(struct social_insu * p)
{
    puts("Please enter social number \n");
    scanf("%lu",&(p->social_num));
    puts("Insert name \n");
    scanf("%s %s %s",p->information.firstname,p->information.midname,p->information.lastname);
}

void output(struct social_insu * p)
{
    if(p->information.midname[0]=='\0')
    {
        printf("%s,%s,%lu \n",p->information.lastname,p->information.firstname,p->social_num);
    }
    else
    {
        printf("%s,%s %c. %lu \n",p->information.lastname,
               p->information.firstname,p->information.midname[0],p->social_num);
    }
}
