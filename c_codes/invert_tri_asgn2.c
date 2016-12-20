#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,l,m,t,n;
	printf("Enter a no - ");
	scanf("%d",&m);
	t=m;
	n=m;
	for(i=1;i<=t;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" \t");
		}
		for(j=1;j<2*m;j++)
		{
			if(j<m)
			{
				printf("%d\t",n);
				n++;
			}
			else
			{
				printf("%d\t",n);
				n--;
			}
		}
		m--;
		printf("\n");
	}
	return 0;
}
