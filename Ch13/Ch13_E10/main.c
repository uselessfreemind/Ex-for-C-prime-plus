#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define FLEN 50
#define LEN 1000

int main(void)
{
 FILE * fp;
  char fname[FLEN];

  char f_content[LEN];
  char * temp;
  char str_pos[10];
  unsigned long pos=20;

  fprintf(stdout,"Enter the file name\n");
  scanf("%s",fname);
  if((fp=fopen(fname,"rb"))==NULL)
  {
    fprintf(stderr,"Cannot open the specified file\n");
    exit(1);
  }
  else
  {
    do
    {
      fprintf(stdout,"Enter the position in the file\n");
      scanf("%lu",&pos);
      sprintf(str_pos,"%lu",pos);
      fseek(fp,pos,SEEK_CUR);
      temp=f_content;
      do
      {
        *temp++=fgetc(fp);
      }while(*(temp-sizeof(char))!='\n');
      puts(f_content);
    }while(isdigit(str_pos[0]));
  }

  return 0;
}
