#include<stdio.h>
#include<stdlib.h>
int main()
{
    int d1,d2,m1,m2,y1,y2,f;
    scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
    if(y1<y2)
        f = 0;
    else if(y1==y2){
        if(m1<m2)
            f = 0;
        else if(m1==m2){
            if(d1<d2)
                f = 0;
            else
                f = 15*(d1-d2);
        }
        else
            f = 500*(m1-m2);
    }
    else if(y2+1==y1){
        if(m2-m1>0)
            f = 500*(12-m2+m1);
        else if((m2-m1)==0){
            if((d2-d1)>0)
                f = 12*500;
            else if((d2-d1)<=0)
                f = 10000;
        }
        else
            f = 10000;
    }
    else
        f = 10000;
    printf("%d",f);
    return 0;
}
