#include "show_info.h"
struct book library[MAXBKS];
int main(void)
{

    int count=0;

    printf("Please enter the title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while(count<MAXBKS&&gets(library[count].title)!=NULL
          &&library[count].title[0]!='/0')
    {
        printf("Enter the author.\n");
        gets(library[count].author);
        printf("Enter the value.\n");
        scanf("%f",&library[count++].value);
        while(getchar()!='\n')
            continue;
        if(count<MAXBKS)
            printf("Enter the next title.\n");

    }
    if(count)
    {
        show_info(count);
    }


    return 0;
}
