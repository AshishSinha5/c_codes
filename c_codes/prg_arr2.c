#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,num[]={10,20,30,40,50,60};
    for(i=0;i<6;i++)
    {
        printf("%d\t%d\t%d\t%d\n",num[i],*(num+i),i[num],&num[i]);
    }
    return 0;
}
