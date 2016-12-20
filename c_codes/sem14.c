#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void xstrcat(char*,char*);
int main()
{
    char a[50],b[10];
    printf("Enter Target and Source - ");
    scanf("%s%s",a,b);
    xstrcat(a,b);
    printf("\nConcatenated String - %s",a);
    return 0;
}
void xstrcat(char *x,char *y)
{
    while(*x!='\0'){
        x++;
    }
    while(*y!='\0'){
        *x = *y;
        x++;
        y++;
    }
    *x = '\0';
}
