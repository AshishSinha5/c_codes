#include<stdio.h>
#include<stdlib.h>
int main(){
    int d,n,sum=0,k=1;
    printf("Enter a Decimal no. - ");
    scanf("%d",&n);
    while(n!=0){
        d = n%2;
        sum = sum+d*k;
        k*=10;
        n/=2;
    }
    printf("Equivalent Binary Number - %d",sum);
    return 0;
}
