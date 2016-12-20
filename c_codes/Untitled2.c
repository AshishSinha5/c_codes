#include<stdio.h>
#include<stdlib.h>
int fun1();
int fun2();
int main()
{


    fun1();
    fun1();
    return 0;
}

int fun1()
{
    static int i = 35;
    i++;
    printf("%d\n",i);
    return 0;
}
int fun2()
{
    i--;
    printf("%d\n",i);
}

