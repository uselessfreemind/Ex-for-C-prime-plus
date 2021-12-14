
#include "E10.h"
int main(void)
{
    char *org[NUM]={"hello this is aaa","Excuse me","How can I help you","Yes, I'd like to buy xxx","It's out of stock"};
    //size_t sentence=0;
    /*puts("Enter the first sentence");
    while(sentence<NUM)
    {
        fgets(org[sentence++],LEN,stdin);
        if(sentence!=NUM-1)
            puts("Enter the next sentence");
        else
            puts("\n");
        }*/
menu(org);


return 0;
}
