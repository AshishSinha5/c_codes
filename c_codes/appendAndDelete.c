#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[512000*sizeof(char)],t[512000*sizeof(char)];
    int k,i,a,d,l,flag=0,same=0,first=1;;
    scanf("%s%s%d",s,t,&k);
    for(i=0;*(s+i)||*(t+i);i++){
        if(first&&*(s+i)==*(t+i))
            same++;
        else
            first=0;
    }
    a = strlen(s)-same;
    d = strlen(t)-same;
    //printf("\n%d\n%d\n%d",a,d,i);
    l=a+d;
    if(l==0){
        if(k%2)
            flag=0;
        else
            flag=1;
    }
    else if(k>=l){
        if((k-l)%2)
            flag=0;
        else
            flag=1;
    }
    else if(k>(strlen(s)+strlen(t)))
        flag=1;
    flag?printf("Yes"):printf("No");
    return 0;
}
