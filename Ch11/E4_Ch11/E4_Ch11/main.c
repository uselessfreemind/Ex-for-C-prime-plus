#include <string.h>
#include <stdio.h>

char * search_str(char * const, char);
int main(void)
{
    char input[50];
    char x;
    puts("The string to search is");
    while(gets(input)!=NULL)
    {
        puts("the character to locate is");
        x=getchar();
        printf("%c is at the %s of \'%s\'.\nThe next string is\n",x,search_str(input,x),input);
        while(getchar()!='\n')
            continue;

    }
    return 0;
}

char * search_str(char * const to_sch, char ch)
{
    char * temp=to_sch;
    unsigned short i=0;
    unsigned int len=strlen(to_sch);
    if (*temp!='\0')
    {
        while(*temp++!=ch)
        {
            if(i<=len)
                i++;
            else
                break;

        }
        return to_sch+i;
    }
    else
        return NULL;
}

