#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    unsigned long long int t1,t2,sum;
    int n,i;
    scanf("%llu%llu%d",&t1,&t2,&n);
    for(i=3;i<=n;i++){
        sum = t1 + (t2*t2);
        t1 = t2;
        t2 = sum;
    }
    printf("%llu",sum);
    return 0;
}
