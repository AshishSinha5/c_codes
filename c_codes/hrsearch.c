#include<stdio.h>
#include<stdlib.h>
int main()
{
    int v,n,i;
    scanf("%d",&v);
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(v==a[i]);
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
