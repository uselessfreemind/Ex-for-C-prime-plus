#include "e8.h"

int main(int argc,char ** argv)
{
    FILE * fname[argc-2];
    char Char_tar=*argv[1];
    size_t counts=0;

    //printf("Hello world!\n");
    for(size_t i=0; i<argc-2; i++)
    {
        if((fname[i]=fopen(argv[i+2],"rb"))==NULL)
        {
            fprintf(stderr,"Cannot open the specified file\n");
            exit(1);
        }
        else
        {
           while(feof(fname[i])==0)
           {
               if(Char_tar==fgetc(fname[i]))
                counts++;
           }
           printf("There are %u %c in the file %s and its name including itself\n",counts+contain(argv[i+2],Char_tar),Char_tar,argv[i+2]);
        }

    }
    return 0;
}
