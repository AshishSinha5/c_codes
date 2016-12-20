#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    double plus=0,minus=0,zero=0;;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        if(a[i]>0)
            plus++;
        else if(a[i]<0)
            minus++;
        else
            zero++;
    }
    printf("%lf\n%lf\n%lf",(plus/n),(minus/n),(zero/n));
    return 0;
}
