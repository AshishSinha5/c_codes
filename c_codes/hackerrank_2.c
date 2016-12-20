#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    long long int a[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld ",&a[i]);
        sum+=a[i];
    }
    printf("\n%lld",sum);
    return 0;
}
