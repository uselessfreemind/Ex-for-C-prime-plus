#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FLEN 200

int main(int argc,char ** argv)
{
    FILE * src,* dsty;
    char temp[FLEN];
    if((src=fopen(argv[1],"rb"))==NULL)
    {
        fprintf(stderr,"Can't open the specified file\n");
        exit(1);
    }
    else
    {
      fgets(temp,FLEN,src);
      if((dsty=fopen(argv[2],"ab"))==NULL)
      {
       fprintf(stderr,"Can't open the specified file\n");
       exit(2);
      }
      else
      {
       fputs(temp,dsty);
      }
    }
    fclose(src);
    fclose(dsty);

    return 0;
}
