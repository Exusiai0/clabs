#include <stdio.h>
int main()
{
    int max_int = (1<<31) - 1;
    printf("The max value of int on 32 machine:%d\n", max_int);
    unsigned int max_uint = 0 - 1;
    printf("The max value of unsigned int on 32 machine:%u\n",max_uint);
}