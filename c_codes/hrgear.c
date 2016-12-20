#include<stdio.h>
#include<stdlib.h>
#include<algorithm.h>

int main()
{
    long int n;
    scanf("%ld",&n);
    long int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
