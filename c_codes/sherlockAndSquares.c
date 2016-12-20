#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t,a,b,i,count;
    float sum;
    scanf("%d",&t);
    while(t>0){
        count=0;
        scanf("%d%d",&a,&b);
        a = ceil(pow(a,0.5));
        b = floor(pow(b,0.5));
        count = b-a+1;
        printf("%d\n",count);
        t--;
    }
    return 0;

}
