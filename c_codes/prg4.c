#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,l;
	char c;
	for(i=7;i>=1;i--)
	{
		c='A';
		if(i==7)
		{
			for(j=1;j<=13;j++)
			{
				if(j<=7)
				{
					printf("%c\t",c);
					c++;
				}
				else
				{
					printf("%c\t",c);
					c--;
				}
			}
		}
		else
		{
			for(j=1;j<=i;j++)
			{
				printf("%c\t",c);
				c++;
			}
			for(k=1;k<=(2*(7-i)-1);k++)
			{
				printf(" \t");
			}
			for(l=1;l<=i;l++)
			{
				c--;
				printf("%c\t",c);
			}
		}
		printf("\n");
	}
	return 0;
}
