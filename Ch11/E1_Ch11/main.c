#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 500
void st_input(void);

int main(void)
{


st_input();


    return 0;
}
void st_input(void)
{
        char in;
        puts("enter the alphabet");

while((in=getchar())!='\0')
{
    if ((in!='\t')||(in!='\040'))
         printf("You put a %c \n",in);
    else
        printf("You put a space or a tab \n");
}


        return ;
}
