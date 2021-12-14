#include "E12.h"

char ntoc(int in)
{
  char out;

  switch(in)
  {
  case 1:
    out='!';
    break;
  case 2:
    out='@';
    break;
  case 3:
    out='#';
    break;
  case 4:
    out='$';
    break;
  case 5:
    out='%';
    break;
  case 6:
    out='^';
    break;
  case 7:
    out='&';
    break;
  case 8:
    out='*';
    break;
  case 9:
    out='~';
    break;
  case 0:
    out=' ';
    break;
  default:
    out=' ';
  }
  return out;
}

void ch2num(FILE * org ,int (*ar_num)[COL])
{
    for(size_t i=0;i<ROW;i++)
    {
        for(size_t j=0;j<COL;j++)
            {
                fscanf(org,"%d",&ar_num[i][j]);
            }
    }
}

void graph_make(int(*ar_num)[COL],char (*ar_ch)[COL+1])
{
    for(size_t i=0;i<ROW;i++)
    {
        for(size_t j=0;j<COL;j++)
        {
            ar_ch[i][j]=ntoc(ar_num[i][j]);
        }
        fputs(ar_ch[i],stdout);
    }
}
