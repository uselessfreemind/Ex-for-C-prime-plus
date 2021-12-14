#include "E7.h"


int main(void)
{
    FILE * fless,* fmore;
    char fname[FILE_NAME];

    printf("Enter the first file name\n");
    scanf("%s",fname);
    if((fless=fopen(fname,"rb"))==NULL)
    {
        fprintf(stderr,"Cannot open the specified file\n");
        exit(1);
    }
    else
    {
        printf("Enter the second file name\n");
        scanf("%s",fname);
        if((fmore=fopen(fname,"rb"))==NULL)
        {
            fprintf(stderr,"Cannot open the specified file\n");
            exit(2);
        }
        else
        {
            file_read_V2(fless,fmore);
        }
        fclose(fless);
        fclose(fmore);
    }
    return 0;
}
