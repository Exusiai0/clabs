#include <stdio.h>
long main()
{
    unsigned long x = 1;
     long y = 0;
    while ( x != 0 )
    {
        x = x<<1;
        y = y+1;

    }
    printf ("Max : %d\n",y);
    printf ("Bit : %d\n",x-1);
    return 0;
}