#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s,t,a,b,m,n,i,j,s1=0,s2=0;
    scanf("%d%d%d%d%d%d",&s,&t,&a,&b,&m,&n);
    int ap[m],or[n];
    for(i=0;i<m;i++){
        scanf("%d",(ap+i));
        if((a+ap[i])>=s&&(a+ap[i])<=t)
            s1++;
    }
    for(i=0;i<n;i++){
        scanf("%d",(or+i));
        if((b+or[i])>=s&&(b+or[i])<=t)
            s2++;
    }
    printf("%d\n%d",s1,s2);
    return 0;
}
