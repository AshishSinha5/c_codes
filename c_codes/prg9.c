#include<stdio.h>
#include<stdlib.h>
int i=35;
int inc();
int dec();
int main()
{
    extern int i;
    printf("%d\n",i);
    dec();
    inc();
    return 0;
}
int dec()
{
    i--;
    printf("%d\n",i);
    printf("%d\n",i);
    return 0;
}
int inc()
{
    i++;
    printf("%d\n",i);
    return 0;
}
