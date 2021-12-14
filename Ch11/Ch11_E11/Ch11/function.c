#include "E11.h"

stat * report(char * in,stat * temp)
{
    size_t len=strlen(in);
    for(size_t i=0; i<len; i++)
    {
        if(*(in+i)!=EOF)
        {
            temp->number+=isalnum(*(in+i));
            temp->cap+=isupper(*(in+i));
            temp->little+=islower(*(in+i));
            temp->comma+=ispunct(*(in+i));
            temp->noun+=isblank(*(in+i))+1;
        }
    }
    return temp;
}
