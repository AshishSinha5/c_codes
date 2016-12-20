#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[100];
    long long int n,sum=0,count=0;
    int l,i;
    scanf("%s%lld",s,&n);
    l = strlen(s);
    for(i=0;i<l;i++){
        if(*(s+i)=='a')
            sum++;
    }
    count = (n/l)*sum;
    for(i=0;i<(n%l);i++){
        if(*(s+i)=='a')
            count++;
    }
    printf("%lld",count);
    return 0;
}
