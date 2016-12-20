#include<stdio.h>
#include<stdlib.h>
int fact(int);
int main()
{
    int a;
    printf("entera no. - ");
    scanf("%d",&a);
    printf("Factorial of the given no. - %d",fact(a));
    return 0;

}
int fact(int x)
{
    int f;
    if(x==1)
        return 1;
    else
        return(x*fact(x-1));

}
