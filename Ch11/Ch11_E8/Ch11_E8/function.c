
#include "E8.h"

 void Up_to_down (char *input)
 {
   u16 outer,inner,index;
   size_t len=strlen(input);
   char temp;
    for(outer=0;outer<len-1;outer++)
    {
        for(inner=outer+1;inner<len-1;inner++)
        {
            if (input[outer]>input[inner])
            {
                temp=input[outer];
                input[outer]=input[inner];
                input[inner]=temp;
            }
        }
    }
    for(index=0;index<len;index++)
    {
         printf("%s \n",input);
    }

 }

char *str_anti(char * input)
{
    size_t len=strlen(input);
    char temp;
    if(len%2)
    {
        temp=input[0];
        input[0]=input[len-1];
        input[len-1]=temp;
       for(int i=1;i<=(len-1)/2;i++)
        {
            temp=input[i];
            input[i]=input[len-1-i];
            input[len-1-i]=temp;
        }

    }
    else
    {
        for(int i=0;i<len/2;i++)
        {
            temp=input[i];
            input[i]=input[len-1-i];
            input[len-1-i]=temp;
        }
    }
    return input;
}
