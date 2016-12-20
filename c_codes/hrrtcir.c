#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,l,m,k,q,n;
    scanf("%d %d %d",&n,&k,&q);
    int a[n],b[q];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[(i+k)%n]);
    }
    for(i=0;i<q;i++)
    {
        scanf("%d ",&b[i]);
        printf("%d\n",a[b[i]]);
    }
    return 0;

}
