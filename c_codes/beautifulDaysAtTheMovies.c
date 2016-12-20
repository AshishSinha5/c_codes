#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int rev(int);
int main()
{
    int i,j,k,l,count=0;
    scanf("%d%d%d",&i,&j,&k);
    for(l=i;l<=j;l++){
        if(abs(l-rev(l))%k==0)
            count++;
    }
    printf("%d",count);
    return 0;
}
int rev(int x)
{
    int d,sum=0;
    while(x!=0){
        d = x%10;
        sum = sum*10 + d;
        x/=10;
    }
    return sum;
}
