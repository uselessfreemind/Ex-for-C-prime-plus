#include "E12.h"

int main(int argc, char ** argv)
{

  int graph_num[ROW][COL];
  char graph_ch[ROW][COL+1];
  FILE * fp;

  if((fp=fopen(argv[1],"rb"))==NULL)
  {
    fprintf(stderr,"Cannot open the specified file\n");
    exit(1);
  }
  else
  {
    ch2num(fp,graph_num);
    graph_make(graph_num,graph_ch);
  }
  return 0;
}
