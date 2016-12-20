#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0,key,j;
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
            j = j-1;
        }
        a[j+1] = key;
    }
    i=0;
    printf("\n%d\n",n);
    while(i<n){
        do{
            sum++;
            i++;
        }while(a[i-1]==a[i]);
        if((n-sum)!=0)
            printf("%d\n",(n-sum));
    }
    return 0;
}
