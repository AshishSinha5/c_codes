#include<stdio.h>
#include<stdlib.h>
void mrgesrt(int,int);
void mrge(int,int,int);
int a[4];
int main()
{
    int i,r=4,p=1;
    for(i=0;i<r;i++){
        scanf("%d",(a+i));
    }
    printf("\n\nUnsorted array\n\n");
    for(i=0;i<r;i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n\nSorted array\n\n");
    mrgesrt(p,r);
    for(i=0;i<r;i++){
        printf("%d ",*(a+i));
    }
    return 0;
}
void mrgesrt(int p,int r)
{
    int q,s;
    if(p<r){
        q=(p+r)/2;
        s=q+1;
        mrgesrt(p,q);
        mrgesrt(s,r);
        mrge(p,q,r);
    }

}
void mrge(int p2,int q2,int r2)
{
    int n1=q2-p2+1,n2=r2-q2,l[n1],rt[n2],k;
    int i,j;
    for(i=0;i<n1;i++){
        l[i]=*(a+(p2+i-1));
    }
    for(j=0;j<n2;j++){
        rt[j]=*(a+(q2+j));
    }
    i=0;
    j=0;
    for(k=(p2-1);k<r2;k++)
    {
        if(l[i]<=rt[j])
        {
            *(a+k)=l[i];
            i++;
        }
        else
        {
            *(a+k)=rt[j];
            j++;
        }
    }
}


