#include<stdio.h>
#include<stdlib.h>
void get(int *);
int main()
{
    int a[8],b[8],c[9],i,rem=0;
    get(a);
    get(b);
    for(i=0;i<8;i++)
    {
        c[i]=(a[i]+b[i]+rem)%2;
        rem=(a[i]+b[i]+rem)/2;
    }
    if(rem)
        c[i++]=rem;
    --i;
    while(i>=0)
    {
        printf("%d",c[i--]);
    }
    return 0;
}
void get(int *x)
{
    int i;
    for(i=7;i>=0;i--)
    {
        scanf("%d",(x+i));
    }
    for(i=7;i>=0;i--)
    {
        printf("%d ",*(x+i));
    }
    printf("\n");
}
