#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,sum=0,i;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
        scanf("%d",(a+i));
   }
   for(i=0;i<n;){
        if(a[i+2]==0)
            i+=2;
        else
            i+=1;
        sum++;
   }
   printf("%d",--sum);
}
