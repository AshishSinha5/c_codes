#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int a[5],i,sum=0,key,j;
    for(i=0;i<5;i++){
        scanf("%ld",(a+i));
    }
    for(i=1;i<5;i++){
        key = a[i];
        j = i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(i=0;i<4;i++){
        sum+=a[i];
    }
    printf("%ld ",sum);
    sum=0;
    for(i=1;i<5;i++){
        sum+=a[i];
    }
    printf("%ld",sum);
    return 0;
}
