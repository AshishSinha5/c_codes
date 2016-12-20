#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int xstrcmp(char *,char *);
int main()
{
    int l;
    char a[50],b[50];
    printf("Enter two Strings - ");
    scanf("%s%s",a,b);
    l = xstrcmp(a,b);
    if(l<0)
        printf("a is less than b");
    else if(l>0)
        printf("a is greater than b");
    else
        printf("a is equal to b");
    return 0;
}
int xstrcmp(char *x,char *y)
{
    int i;
    while(*x!='\0'||*y!='\0'){
        if(*x!=*y){
            break;
        }
        x++;
        y++;
    }
    i = (int)*x-(int)*y;
    return i;
}
