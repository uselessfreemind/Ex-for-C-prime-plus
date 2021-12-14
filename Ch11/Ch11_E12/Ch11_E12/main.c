#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[3])
{
    printf("%s\n",argv[0]);
    for(size_t i=3;i>0;i--)
        printf("%s\n",argv[i]);
    return 0;
}

