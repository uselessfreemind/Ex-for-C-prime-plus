#include "E10.h"

/*void Ssort(void * in,size_t ar_len)
{
    size_t outer,inner;
    int type_len=sizeof(in);

    switch(type_len)
    {
    case sizeof(char):
    }

    for(outer=0; outer<len; outer++)
    {
        for(inner=outer+1; inner<len; inner++)
        {
            void * temp;
            if(in[outer],in[inner])>0)
            {
                temp=in[inner];
                in[inner]=in[outer];
                in[outer]=temp;
            }
        }
    }
}*/
char** replicate_add(char *src[NUM],char * temp[NUM])
{

    for(size_t j=0; j<NUM; j++)
    {
        temp[j]=src[j];
    }
    return temp;
}

char** replicate_var(char *src[NUM],char (*tar)[LEN])
{

    for(size_t i=0; i<NUM; i++)
    {
        strcpy(*(tar+i),src[i]);
    }
    return tar;
}

void string_org(char *in[NUM])
{
    for(size_t n=0; n<NUM; n++)
    {
        puts(in[n]);
    }
}

void string_ASC2(char *in[NUM])
{
    char * str_temp[NUM];
    replicate_add(in,str_temp);
    size_t outer,inner;
    for(outer=0; outer<NUM; outer++)
    {
        for(inner=outer+1; inner<NUM; inner++)
        {
            char * temp;
            if(strcmp(str_temp[outer],str_temp[inner])>0)
            {
                temp=str_temp[inner];
                str_temp[inner]=str_temp[outer];
                str_temp[outer]=temp;
            }
        }
    }
    for(size_t n=0; n<NUM; n++)
    {
        puts(str_temp[n]);
    }
}

void string_length_up(char *in[NUM])
{
    size_t outer,inner;
    char *str_temp[NUM];
    replicate_add(in,str_temp);

    for(outer=0; outer<NUM; outer++)
    {
        for(inner=outer+1; inner<NUM; inner++)
        {
            char * temp;
            if(strlen(str_temp[outer])>strlen(str_temp[inner]))
            {
                temp=str_temp[inner];
                str_temp[inner]=str_temp[outer];
                str_temp[outer]=temp;
            }
        }
    }
    for(size_t n=0; n<NUM; n++)
    {
        puts(str_temp[n]);
    }
}

void string_fword_up(char *in[NUM])
{
    char str_temp[NUM][LEN];
    size_t fword_len[NUM];
    char * find;
    replicate_var(in,str_temp);
    //copy the source string array
    for(size_t i=0; i<NUM; i++)
    {
        find=strchr(str_temp[i],' ');
        if(find)
        {

            *find='\0';
        }
    }
// keep the first word in the temporary string array
    for(size_t outer=0; outer<NUM; outer++)
    {
        for(size_t inner=outer+1; inner<NUM; inner++)
        {
            char str_swap[NUM];
            if(strlen(str_temp[outer])>strlen(str_temp[inner]))
            {
                strcpy(str_swap,str_temp[inner]);
                strcpy(str_temp[inner],str_temp[outer]);
                strcpy(str_temp[outer],str_swap);
            }
        }
    }
// sort the temporary string array by its length
    for(size_t k=0; k<NUM; k++)
    {
        fword_len[k]=strlen(str_temp[k]);
    }
// fill the new array of string length of the temporary array
    for(size_t m=0; m<NUM; m++)
    {
        for(size_t n=0; n<NUM; n++)
        {
            if (strncmp(in[n],str_temp[m],fword_len[m]))
                ;
            else
                puts(in[n]);
        }
    }
}

void menu(char *in[NUM])
{
    int choice;

    while(1)
    {
        printf("Choose the function\n1.Display original string set\n");
        printf("2.Display string set by ASCII\n");
        printf("3.Display string set by length\n");
        printf("4.Display string set by first word's length\n");
        printf("5.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            string_org(in);
            puts("\n");
            break;
        case 2:
            string_ASC2(in);
                 puts("\n");
            break;
        case 3:
            string_length_up(in);
                 puts("\n");
            break;
        case 4:
            string_fword_up(in);
                 puts("\n");
            break;
        case 5:
            return;
            break;
        default:
            string_org(in);
                 puts("\n");
            break;
        }
    }
}



