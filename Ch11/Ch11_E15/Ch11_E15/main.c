#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define NUM 50

int main(int argc,char ** argv)
{
    char in[NUM];
    size_t i=0;
    while((*(in+i)=getchar())!=EOF)
    {
         i++;
       while(getchar()!='\n')
        continue;

    }
    argv++;
   if(strcmp(*argv,"-P")==0)
   {
       puts(in);
   }
   else if(strcmp(*argv,"-U")==0)
   {
       for(size_t i=0;i<strlen(in);i++)
       {
           *(in+i)=toupper(*(in+i));
       }
          puts(in);
   }
   else if(strcmp(*argv,"-L")==0)
   {
       for(size_t i=0;i<strlen(in);i++)
       {
           *(in+i)=tolower(*(in+i));
       }
          puts(in);
   }


    return 0;
}
