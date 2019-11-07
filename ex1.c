#include <stdio.h>
int main()
{
    unsigned int x=1;
    unsigned int y=0-1;
    unsigned int z=0;
    while(x!=0){
        x=x<<1;
        z=z+1;
    }
    printf("x=%d\n",z);
    printf("%u\n",y);
    return 0;
}