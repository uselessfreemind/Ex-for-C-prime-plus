#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char ** argv)
{
    double power=1;
    double base=atof(*++argv);
    int index=atoi(*++argv);
    for(size_t i=0; i<index; i++)
        power*=base;

    printf("%f's %d power is %f\n",base,index,power);
    return 0;
}
