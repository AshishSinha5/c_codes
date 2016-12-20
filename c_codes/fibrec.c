#include<stdio.h>
#include<stdlib.h>
int fib(int);
int main()
{
	int i,n,j,k;
	scanf("%d",&n);
	int a1=0,a2=1;
	printf("%d %d ",a1,a2);
	for(i=3;i<=n;i++)
	{
		printf("%d ",fib(i-1));

	}
	return 0;
}
int fib(int i)
{
	if(i==1)
	return 1;
	else if(i==0)
	return 0;
	else
	return(fib(i-1)+fib(i-2));
}
