#include<stdio.h>
int main()
{
    unsigned char c;
    for(c=0;c<=254;c++)
    {


    printf("\n%d\t%c",c,c);
    }
    printf("\n%d\t%c",255,255);
    return 0;
}
