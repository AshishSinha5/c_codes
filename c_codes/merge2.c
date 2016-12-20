#include<stdlib.h>
#include<stdio.h>
void mrgsrt(int*,int,int);
void mrg(int*,int,int,int);
int main()
{
    int i,j,max;
    printf("Enter size- ");
    scanf("%d",&max);
    int a[max];
    for(i=0;i<max;i++){
        scanf("%d",&a[i]);
    }
    printf("\n\nUnsorted Array\n\n");
    for(i=0;i<max;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\nSorted Array\n\n");
    mrgsrt(a,1,max);
    for(i=0;i<max;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
void mrgsrt(int *x,int l,int r)
{
    int m;
    if(l<r){
        m=(l+r)/2;
        mrgsrt(x,l,m);
        mrgsrt(x,m+1,r);
        mrg(x,l,m,r);
    }
}
void mrg(int *x,int min,int mid,int max)
{
    int n1=(mid-min+1),n2=(max-mid),lt[n1+1],rt[n2+1],i,j,k;
    for(i=0;i<n1;i++)
    {
        lt[i]=*(x+(min+i-1));
    }
    for(j=0;j<n2;j++)
    {
        rt[j]=*(x+(mid+j));
    }
    i=0;
    j=0;
    lt[n1]=9999;
    rt[n2]=9999;
    for(k=min-1;k<max;k++)
    {
        if(lt[i]<=rt[j]){
            *(x+k)=lt[i++];
        }
        else{
            *(x+k)=rt[j++];
        }
    }
}
