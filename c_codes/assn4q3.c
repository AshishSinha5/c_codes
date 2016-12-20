#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int i,v=0,c=0,s=0,j,k=0;;
	char a[100];
	gets(a);
	strlwr(a);
	for(i=0;i<strlen(a);i++){
		j = (int)a[i];
		if(j==32)
            s++;
		else if(j==97||j==101||j==105||j==111||j==117)
			v++;
		else if(j>97&&j<=122)
            c++;
        else
            k++;
	}
	printf("Space = %d\nVowel = %d\nConsonant = %d",s,v,c);
	return 0;
}
