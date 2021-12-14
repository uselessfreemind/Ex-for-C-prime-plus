#include "E7.h"

void file_read_V1(FILE * f_less,FILE * f_more)
{
  char temp[LEN];

  while((feof(f_less)==0)||feof(f_more)==0)
  {
    for(size_t i=0; i<LEN; i++)
    {
      temp[i]=fgetc(f_less);
      if (temp[i]=='\r')
      {
        puts(temp);
        break;
      }
    }

    for(size_t j=0; j<LEN; j++)
    {
      temp[j]=fgetc(f_more);
      if (temp[j]=='\r')
      {
        puts(temp);
        break;
      }
    }
  }
}

void file_read_V2(FILE * f_less,FILE * f_more)
{
  char temp_str1[LEN];
  char temp_str2[LEN];
  size_t line_f1=0,line_f2=0;


  while((feof(f_less)==0)||feof(f_more)==0)
  {
    for(size_t i=0; i<LEN; i++)
    {
      temp_str1[i]=fgetc(f_less);
      if (temp_str1[i]=='\r')
      {
        line_f1++;
        break;
      }
    }

    for(size_t j=0; j<LEN; j++)
    {
      temp_str2[j]=fgetc(f_more);
      if (temp_str2[j]=='\r')
      {
        if(line_f2++==line_f1)
        {
          strcat(temp_str1,temp_str2);
          puts(temp_str1);
        break;
        }

      }
    }
  }
}
