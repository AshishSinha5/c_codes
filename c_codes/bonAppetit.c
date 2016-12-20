#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k,i,sum,sum2=0;
    scanf("%d%d",&n,&k);
    int c[n];
    for(i=0;i<n;i++){
        scanf("%d",(c+i));
        sum2+=((i==k)?:c[i]);
    }
    scanf("%d",&sum);
    if(sum2/2==sum)
        printf("Bon Appetit");
    else
        printf("%d",(sum-sum2/2));
    return 0;

}
