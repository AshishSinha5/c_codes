#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i[3][5]={{1,2,3,4,5},{6,7,8,9,0},{11,12,13,14,15}},*n = (int *)&i;
    printf("%d",*(*i+2));
    return 0;
}
