#include<stdio.h>
#include<stdlib.h>
int main()
{
    union a
    {
        short int i;
        char ch[2];
    };
    union a key;
    key.i =512;
    printf("key.i = %d\n",key.i);
    printf("key.ch[0] = %d\n",key.ch[0]);
    printf("key.ch[1] = %d\n",key.ch[1]);
    int x;
    x = -3+4-7*8/5%10;
    printf("\n%d\n",x);
    int i,j,k;
    for(i=1;i<=5;i++){
        for(k=1;k<=5-i;k++){
            printf("  ");
        }
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
