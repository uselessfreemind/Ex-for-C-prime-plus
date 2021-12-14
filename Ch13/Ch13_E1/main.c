#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE * fp;
    char * temp=" ";
   if((fp=fopen("new.txt","w+"))!=NULL)
    fputs("good job", fp);
   else
    fprintf(stderr,"Can't creat or open the specified file",temp);
    return 0;
}
