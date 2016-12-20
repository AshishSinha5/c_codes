#include<stdio.h>
#include<stdlib.h>
void scan(int *,int,int);
void display(int *,int,int);
int main()
{
	int i,j,k,l,r1,c1,r2,c2,sum;
	printf("row1,col1,row2,col2");
	scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
	int a1[r1][c1],a2[r2][c2],a3[r1][c2];
	scan(a1,r1,c1);
	scan(a2,r2,c2);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			sum=0;
			for(k=0;k<r2;k++)
			{
				sum+=a1[i][k]*a2[k][j];
			}
			a3[i][j]=sum;
		}

	}
	display(a1,r1,c1);
	display(a2,r2,c2);
	display(a3,r1,c2);

	return 0;
}
void scan(int *p,int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d ",p);
			p++;
		}
	}
	printf("\n");
}
void display(int *p,int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",*p);
			p++;
		}
		printf("\n");
	}
	printf("\n\n");
}
