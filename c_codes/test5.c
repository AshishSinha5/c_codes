#include<stdlib.h>
#include<stdio.h>
int main()
{
int j=10,i;
i = (j++)+(++j)+(j++);
printf("%d",i);
return 0;
}
