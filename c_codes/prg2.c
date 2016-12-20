#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}+