#include "E10.h"

int main(void)
{
 unsigned int source[5];
 unsigned char option;
 typedef void (*PFUN)(unsigned int *);
 PFUN pf;

while((option=choose())!='\0')
{
    switch(option)
    {
        case 'u':
           pf=up2low;
        break;
        case 'l':
             pf=low2up;
        break;
        default:break;
    }
    show(pf,source);
}
   return 0;
}




