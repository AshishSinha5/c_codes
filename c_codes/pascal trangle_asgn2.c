#include<stdio.h>
#include<stdlib.h>
int comb(int,int);
int fact(int);
int main()
{
	int i,j,k,l,n;
	printf("Enter a no. - ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(l=1;l<(n-i);l++)
		{
			printf(" \t");
		}
		for(j=0;j<=i;j++)
		{
			k = comb(i,j);
			printf("%d\t \t",k);
		}
		printf("\n\n");
	}
	return 0;
}
int comb(int x,int y)
{
	int k;
	k = fact(x)/(fact(y)*fact(x-y));
	return k;
}
int fact(int x)
{
	int i,prod = 1;
	for(i=1;i<=x;i++)
	{
		prod*=i;
	}
	return prod;
}
