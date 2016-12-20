#include<stdlib.h>
#include<stdio.h>
int main()
{
    int b[]={1,2,3,4,5};
    int i,*k;
    k=&b[4]-4;
    for(i=0;i<=4;i++){
        printf("%d",*k);
        k++;
    }
    return 0;
}
