#include <stdio.h>
#include <stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter a number - ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=i;j<n;j++){
            printf(" \t");
        }
        for(k=i;k<2*i;k++){
            printf("%d\t",k);
        }
        for(l=k-2;l>=i;l--){
            printf("%d\t",l);
        }
        printf("\n\n");

    }
    return 0;
}
