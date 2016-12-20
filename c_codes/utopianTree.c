#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,i,sum,j;
    scanf("%d",&t);
    int n[t];
    for(i=0;i<t;i++){
        scanf("%d",(n+i));
    }
    for(i=0;i<t;i++){
        sum=1;
        for(j=1;j<=n[i];j++){
            sum = (!(j%2))?(sum+1):(sum*2);
        }
        printf("%d\n",sum);
    }
    return 0;
}
