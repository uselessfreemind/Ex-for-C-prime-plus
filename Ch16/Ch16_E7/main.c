#include "E7.h"

int main(void)
{
    double * p1,* p2;

    p1=NewDArray(5,1.2,2.3,3.4,4.5,5.6);
    p2=NewDArray(4,100.0,20.00,8.08,-1890.0);
    ShowArray(p1,5);
    ShowArray(p2,4);
    free(p1);
    free(p2);
    return 0;
}
