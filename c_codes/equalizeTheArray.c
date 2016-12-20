#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,count=0,i,b[100]={0};
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
        scanf("%d",(a+i));
        b[a[i]]++;
   }
   for(i=0;i<100;i++){
        if(b[i]>count)
            count=b[i];
   }
   printf("%d",n-count);
   return 0;
}
