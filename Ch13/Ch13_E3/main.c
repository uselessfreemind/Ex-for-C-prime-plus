#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define LEN 1000
#define BUF_SIZE 1024
int main(void)
{
    FILE *src, *dsty;
    char temp[LEN];
    char fname[LEN];
    char a;
    int ch_count=0;

    fprintf(stdout,"Enter the source name\n");
    scanf("%s",fname);
    if((src=fopen(fname,"rb"))==NULL)
    {
        fprintf(stderr,"Cannot open the specified file\n");
        exit(1);
    }
    else
    {
        while((a=getc(src))!=EOF)
        {
            ch_count++;//characters statistic
        }
        fseek(src,-(long)ch_count,SEEK_CUR);//set cursor to the file begining
        fgets(temp,ch_count,src);//copy file content to temporary string in accordance with char's quantity

        for(size_t i=0; i<ch_count; i++)
        {
            temp[i]=toupper(temp[i]);//transform characters to capital one by one
        }

    }
    fprintf(stdout,"Enter the target file name\n");
    scanf("%s",fname);
    if((dsty=fopen(fname,"wb"))==NULL)
    {
        fprintf(stderr,"Cannot open specified file\n");
        exit(2);
    }
    else
    {
        fputs(temp,dsty);
    }
    fclose(src);
    fclose(dsty);
    return 0;
}

