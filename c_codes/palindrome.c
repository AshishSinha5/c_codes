#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n,sum=0;
    printf("Enter a no.-");
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        k=i%10;
        sum = sum*10+k;
        i/=10;
    }
    printf("%d\n",sum);
    if(sum==n)
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}
