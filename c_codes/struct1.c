#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct
    {
        int x,y;
    }s[]={10,20,15,25,8,75,6,2};//works like a double dimensional array.
    int *i,j;
    for(j=0;j<8;j++)
    {
            printf("%d\n",s+j);
    }

    i=(int *)s;
    printf("%d\n",s[i[7]].x);
    printf("%d\n",s[(s+2)->y/3[i]].y);
    printf("%d\n",i[i[1]-i[2]]);
    printf("%d\n",i[s[3].y]);

    return 0;
}
