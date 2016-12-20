#include<stdio.h>
#include<stdlib.h>
int main()
{
     long int t,n,m,s,po;
    scanf("%ld",&t);
    while(t!=0){
        scanf("%ld%ld%ld",&n,&m,&s);
        po = (s+m%n-1)%n;
        printf("%d\n",po);
        t--;
    }
    return 0;
}
