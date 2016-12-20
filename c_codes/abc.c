#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float x1,x2,v1,v2;
    scanf("%f %f %f %f",&x1,&v1,&x2,&v2);
    long f=(x2-x1)/(v1-v2);
    printf("%lf\n",f);
    if(x1>x2&&v1>v2)
        printf("NO");
    else if(x2>x1&&v2>v1)
        printf("NO");
    else
    {
        if(f-(int)f==0)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
