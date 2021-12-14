#include "E8.h"

int main(void)
{
    float a=0.423e1;
    char *p=(char *)&a;
    char input[MAX]="hello";
//puts("Enter the string");
   printf("%d\n",*p);
    printf("%d\n",*(p+1));
    printf("%d\n",*(p+2));
    printf("%d\n",*(p+3));
    /*
    while(*fgets(input,MAX,stdin)!='\n')
    {
        *strchr(input,'\n')=strchr(input,'\n')?'\0':*strchr(input,'\n');

          puts(str_anti(input));
          puts("Enter the next string");
    }


    */
    return 0;
}
