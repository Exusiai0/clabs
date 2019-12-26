#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int a[100];
int i=1;
int x=0;
for(i=1;i<argc;i++,x++)
{
     a[x]=atof(argv[i]);
}
    int i ;
    int min=a[0];
     for(i=0;i<argc;i++)
     {
if(a[i]<min){
min=a[i];
 }
     }
printf("%d\n",min);
}