#include "E11.h"

int main(void)
{
    stat content={.number=0,.comma=0,.noun=0,.cap=0,.little=0};

    char example[LEN]={"Haha,nIce to meEt mR.Ye at 12/08/2020"};
       report(example,&content);
printf("Includes %u words,%u number,%u capital alphabet,%u little alphabet,%u comma\n",
       content.noun,content.number,content.cap,content.little,content.comma);
    return 0;
}
