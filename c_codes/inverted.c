#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
	while(1)
	{int i,j,k,l,m,t,n;
	printf("Enter a number(number of lines of the pattern) - ");
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
	printf("Do you want to continue? - 1/0");
	scanf("%d",&n);
	if(n==0)
        break;
	}
	printf("Thank You!!!");
	return 0;
}
