#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,a[26],l,k,max=0;
    char b[512000*sizeof(char)];
    for(i=0;i<26;i++){
        scanf("%d",(a+i));
    }
    scanf("%s",b);
    l = strlen(b);
    for(i=0;i<l;i++){
        if(a[(int)b[i]-97]>max)
            max = a[(int)b[i]-97];
    }
    printf("%d",l*max);
    return 0;

}
