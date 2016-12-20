#include<stdio.h>
#include<stdlib.h>
void xstrcat(char *,char *);
int main()
{
    char s1[] = "Good";
    char s2[30] = "Morning";
    char s3[30]="bad";
    xstrcat(s2+7,s1);
    strcat(s3,s1);
    printf("%s\n",s3);
    printf("%s",s2);
    return 0;
}
void xstrcat(char *t,char *s)
{
    while(*s!='\0')
    {
        *t = *s;
        t++;
        s++;
    }
    *t = '\0';
}
