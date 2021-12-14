#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STR_LEN 500

int main(int argc,char ** argv)
{
  FILE * fp;
  char str_temp[STR_LEN];

  if((fp=fopen(argv[2],"r"))==NULL)
  {
    fprintf(stderr,"Cannot open the specified file\n");
    exit(1);
  }
  else
  {
    while(feof(fp)==0)
    {
      fgets(str_temp,STR_LEN,fp);
      if(strstr(str_temp,argv[1])!=NULL)
        fputs(str_temp,stdout);
    }
  }
  return 0;
}
