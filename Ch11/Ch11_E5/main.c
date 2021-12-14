#include <string.h>
#include <stdio.h>
#define MAX 100
int is_within(char,const char *);

int main(void)
{
    char input[MAX];
    char * show;
    char x;
    puts("Please enter the string");
    while(gets(input)!=NULL)
    {
        puts("Enter the character");
        x=getchar();
        printf("%s\n",show=(is_within(x,input))?"character isn't contained":"character is contained");
        puts("Enter the next string");
        while(getchar()!='\n')
            continue;
    }
    return 0;
}

int is_within(char x,const char * to_sch)
{
    int result=0,i=0;
    size_t len=strlen(to_sch);
    if(x==' ')
        return 10086;
    else
    {
       while(*to_sch++!=x)
    {
        if (i++>len)
            break;
    }

    return result=(i>len)?1:0;
    }

}
