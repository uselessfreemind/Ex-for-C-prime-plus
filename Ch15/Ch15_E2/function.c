#include "E2.H"

int StrBin2Int(char * bin)
{
  size_t len=strlen(bin);
 int temp_dec=0;
  for(size_t i=len,j=0;i>0;i--,j++)
  {
    temp_dec+=((bin[i-1]-48)&MASK)*(int)pow(2,j);
  }
  return temp_dec;
}

char * show_bin(int op)
{
  size_t bin_len=8*sizeof(op);
  char * bin=(char *)malloc(sizeof(char)*bin_len+1);
  for(size_t i=0;i<bin_len;i++)
  {
    bin[i]=op&0x80000000?49:48;
    op<<=1;
  }
bin[bin_len]='\0';
  return bin;
}
