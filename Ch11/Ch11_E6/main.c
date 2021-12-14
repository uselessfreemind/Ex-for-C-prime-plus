#include <string.h>
#include <stdio.h>
#define MAX 50

char * my_strncpy(char *,char *, size_t);

int main(void)
{
    char input_tar[MAX],input_src[MAX];
    size_t ct_invalid=0;
    while(10086)
    {
        if( ct_invalid>=3)
            break;
        puts(" Enter the first sentence");
        gets(input_tar);
        puts("Enter the second sentence");
        gets(input_src);
        if((*input_src=='\0')||(*input_tar=='\0'))
        {
            ct_invalid++;
        }
        else
            my_strncpy(input_tar,input_src,10);
        puts(input_tar);
    }

    return 0;
}

char * my_strncpy(char * tar,char * src, size_t n)
{
    size_t len_tar=strlen(tar);
    size_t len_src=strlen(src);
    size_t i;
    if(len_src<=len_tar)
    {
        if(len_src>=n)
        {
            for(i=0; i<n; i++)
            {
                *(tar+i)=*(src+i);
            }
            *(tar+i)='\0';
        }

        else
        {
            for(i=0; i<=len_src; i++)
            {
                *(tar+i)=*(src+i);
            }

        }
    }
    else
    {
        if(n<=len_tar)
        {
            for(i=0; i<n; i++)
            {
                *(tar+i)=*(src+i);
            }
            *(tar+i)='\0';
        }
        else
        {
            for(i=0; i<len_tar; i++)
            {
                *(tar+i)=*(src+i);
            }
            *(tar+i)='\0';
        }

    }

    return tar;
}
