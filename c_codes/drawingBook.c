#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n,p,sum1,sum2;
    scanf("%d%d",&n,&p);
    if(n%2==0)
        n++;
    if(p%2==0)
        p++;
    sum1=(p-1)/2;
    sum2=(n-p)/2;
    if(sum1>=sum2)
        printf("%d",sum2);
    else
        printf("%d",sum1);
    return 0;
}
