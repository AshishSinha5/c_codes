#include<stdio.h>
#include<stdlib.h>
int *fun();
int main()
{
	int *j;
	j =fun();
	printf("%d\n",*j);//prints real value
	printf("%d\n",*j);//prints garbage value
	return 0;
}
int *fun()
{
    int k=35;
	return(&k);

}
