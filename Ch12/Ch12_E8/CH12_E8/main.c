#include "E8.h"

int main(void)
{
    int * pa;
    int size, value;

    printf("Enter the  number of elements: ");
    scanf("%d", &size);
    while(size>0)
    {
        printf("Enter the initialization value: ");
        scanf("%d",&value);
        pa=make_array_malloc(size,value);
        if (pa)
        {
            show_array(pa,size);
            free(pa);
        }
        printf("Enter the number of element(<1 to quit): ");
        scanf("%d",&size);
    }
    printf("Done.\n");
    return 0;
}
