#include "e8.h"

size_t contain(char * file_name,char char_tar)
{
    size_t count=0,len=strlen(file_name);
    for(size_t j=0;j<len;j++)
    {
       if(char_tar==file_name[j])
        count++;
    }
    return count;
}
