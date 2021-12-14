#include "show_info.h"

void show_info(int x)
{
    struct book temp;
    unsigned int i,j;

    for(i=0;i<x;i++)
    {
        for(j=i+1;j<(x-1);j++)
        {
            if(strcmp(library[x].title,library[j].title)>0)
            {
                temp=library[x];
                library[x]=library[j];
                library[j]=temp;
            }
        }
        printf("%s by %s :$%.2f.\n",library[i].title,library[i].author,library[i].value);
    }

    return;
}
