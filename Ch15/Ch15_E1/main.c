#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define LEN 64
#define MASK 0x0000001

int StrBin2Int(char *);

int main(void)
{
  char bin[LEN];
  while(10086)
  {
    printf("Enter the binary\n");
    fgets(bin,LEN,stdin);
    if(*bin=='\n')
      break;
  if(strchr(bin,'\n'))
   *strchr(bin,'\n')='\0';

    printf("It is %d isn't it?\n",StrBin2Int(bin));
  }
  return 0;
}

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
