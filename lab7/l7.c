#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
    int s[100];
    int a =1;
    int b = 0;
    int x=0;
    int y = 0;
    int temp;
    for(a = 1;a < argc;a++,b++)
    {
        s[b] = atof(argv[a]);
    }
    for(x = 0;x < argc-2;x++)
    {
     if(s[x] < s[x+1]) 
{
temp=s[x];
s[x]=s[x+1];
s[x+1]=temp;
}
}
printf("The min is：%d\n",s[argc-2]);
return 0;
}