#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n,k,i,sum;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",(a+i));
    }
    sum = 100-(n/k);
    for(i=0;i<n;i+=k){
        if(*(a+i)==1)
            sum-=3;
    }
    printf("%d",sum);
    return 0;
}
