#include "E7.h"


char * string_in(const char * str_a, const char * str_b)
{
    size_t len_a=strlen(str_a),len_b=strlen(str_b);
    if(len_a>=len_b)
    {
        while(strncmp(str_a++,str_b,len_b))
        ;

        return --str_a;

    }
    else
        return NULL;
}

char * string_in_V2(const char *str_a, const char * str_b)
{
    size_t len_a=strlen(str_a),len_b=strlen(str_b);

        return (len_a>=len_b)?strstr(str_a,str_b):NULL;

}


char * string_in_V3(const char * str_a, const char * str_b)
{
    size_t len_a=strlen(str_a),len_b=strlen(str_b),ct=0,i;
    char * temp=str_b;
    for(i=0;i<len_a;i++)
    {
        if(*(str_a+i)==*temp)
        {
            ++ct;
            temp++;
        }
        else
        {
           ct=0;
           temp=str_b;
        }

        if(ct==len_b)
            break;
    }
    return (ct==len_b)?(str_a+i+1-ct):NULL;

}
