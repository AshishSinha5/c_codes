#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,j,sum=0,sumr=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d ",&a[i][j]);
            if(i==j)
                sum+=a[i][j];
            if(j==(n-1-i))
                sumr+=a[i][j];
        }
    }
    printf("%u",abs(sum-sumr));
    return 0;
}
