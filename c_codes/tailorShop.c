#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long int main()
{
   long int n,p,sum=0,i,k,min=pow(10,5);
   scanf("%ld%ld",&n,&p);
   long int a[n];
   for(i=0;i<n;i++){
       scanf("%ld",(a+i));
       if(a[i]<=min)
           min = a[i];
   }
   if(min%p==0)
        k = min/p;
   else
        k = (min/p)+1;
   for(i=0;i<n;i++){
    sum+=k;
    k++;
   }
   printf("%ld",sum);
   return 0;

}

