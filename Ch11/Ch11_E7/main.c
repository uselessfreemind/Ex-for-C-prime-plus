#include "E7.h"
#define MAX 50
int main(void)
{
    char tar[MAX],src[MAX];
    puts("The origin string is");
    fgets(tar,MAX,stdin);
    puts("The source string is");
    fgets(src,MAX,stdin);
    while(*tar!='\n'||*src!='\n')
    {

        *strchr(tar,'\n')=strchr(tar,'\n')?'\0':NULL;
        *strchr(src,'\n')=strchr(src,'\n')?'\0':NULL;
        printf("%s is at %s of %s\n",src,string_in_V3(tar,src),tar);
        //printf("%s is at %s of %s\n",src,string_in_V2(tar,src),tar);
        puts("The origin string is");
        fgets(tar,MAX,stdin);
        puts("The source string is");
        fgets(src,MAX,stdin);
    }


    return 0;
}
