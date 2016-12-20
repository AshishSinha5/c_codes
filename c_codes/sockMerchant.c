#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,i,key,j,sum=0;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
    scanf("%d",(a+i));
   }
   for(i=1;i<n;i++){
    key = a[i];
    j = i-1;
    while(j>=0&&a[j]>key){
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=key;
   }
   for(i=0;i<n;i++){
    if(a[i]==a[i+1]){
        sum++;
        i++;
    }
   }
   printf("%d",sum);
   return 0;
}
