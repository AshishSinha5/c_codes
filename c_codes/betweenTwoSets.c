#include<stdlib.h>
#include<stdio.h>
int hcf_function(int,int);
int lcm_function(int,int);
int main()
{
    int m,n,i,hcf,lcm,sum=0,j;
    scanf("%d%d",&m,&n);
    int a[m],b[n];
    for(i=0;i<m;i++){
        scanf("%d",(a+i));
    }
    for(i=0;i<n;i++){
        scanf("%d",(b+i));
    }
    lcm=a[0];
    for(i=1;i<m;i++)
        lcm=lcm_function(lcm,a[i]);
    hcf=b[0];

    for(i=1;i<n;i++)
        hcf=hcf_function(hcf,b[i]);

    for(i = lcm, j =2; i<=hcf; i=lcm*j,j++){
            if(hcf%i==0){ sum++;}
    }
    printf("%d",sum);
    return 0;

}
int hcf_function(int m,int n)
{

    int temp,remainder;
    if(m<n)
    {
        temp=m;
        m=n;
        n=temp;
    }
    while(1)
    {
            remainder=m%n;
            if(remainder==0)
            return n;
            else
            m=n;
            n=remainder;
    }
}
int lcm_function(int m,int n)
{

    int lcm;
    lcm=m*n/hcf_function(m,n);
    return lcm;
}
