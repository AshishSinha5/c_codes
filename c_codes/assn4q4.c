#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int i,n1,n2;
	char a[50];
	int flag=0;
	printf("Enter a string\n");
	scanf("%s",a);
	printf("Input Starting And Ending index-\n");
	scanf("%d %d",&n1,&n2);
	int l=strlen(a);
	printf("Extracted String-\n");
	for(i=n1-1;i<n2;i++){
		printf("%c",a[i]);
	}
	printf("\n");
	printf("Enter String to be inserted-\n");
	char s2[50];
	scanf("%s",s2);
	int l2=strlen(s2);
	char s3[50-(n2-n1+1)+l2];
    printf("New String-\n");
    i=0;
	while(flag==0){
		if(i<n1-1)
			printf("%c",a[i]);
		else if(i>=(n1-1)&&i<(n1-1+l2))
			printf("%c",s2[i-(n1-1)]);
		else if(i>=(n2-1+l2)){
            if(a[i-l2+1]=='\0')
                flag=1;
            else
                printf("%c",a[i-l2+1]);
		}
        i++;
	}
}
