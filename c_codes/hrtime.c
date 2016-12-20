#include<stdio.h>
#include<stdlib.h>
int main()
{
    int hh,mm,ss;
    char c[2];
    scanf("%d:%d:%d%c",&hh,&mm,&ss,&c);
    if(c[0]=='P'&&hh!=12)
        hh+=12;
    if(c[0]=='A'&&hh==12)
        hh=00;
    printf("%02d:%02d%:%02d",hh,mm,ss);

    return 0;
}
