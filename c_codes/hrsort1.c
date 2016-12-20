#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        if(m==a[i])
            j=i;
    }
    printf("%d",j);
    return 0;
}
