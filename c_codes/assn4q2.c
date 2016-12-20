#include <stdio.h>
#include <stdlib.h>
void write(int*,int);
void display(int*,int);
void _and(int*,int*,int,int);
void _or(int*,int*,int,int);
void _sort(int*,int);
int main()
{
    int n1,n2,*a,*b;;
    scanf("%d%d",&n1,&n2);
    a=(int *)malloc(n1*sizeof(int));
    b=(int *)malloc(n2*sizeof(int));
    write(a,n1);
    write(b,n2);
    printf("A\n");
    display(a,n1);
    printf("B\n");
    display(b,n2);
    _sort(a,n1);
    _sort(b,n2);
    printf("A OR B\n");
    _or(a,b,n1,n2);
    printf("A AND B\n");
    _and(a,b,n1,n2);
    return 0;
}
void write(int *x,int y){
    int i;
    for(i=0;i<y;i++){
        scanf("%d",(x+i));
    }
    printf("\n");
}
void display(int *x,int y){
    int i;
    for(i=0;i<y;i++){
        printf("%d  ",*(x+i));
    }
    printf("\n");
}
void _sort(int *x,int y){
    int i,j,temp;
    for(i=1;i<y;i++){
        temp = *(x+i);
        j=i-1;
        while(j>=0&&*(x+j)>temp){
            *(x+(j+1))=*(x+j);
            j--;
        }
        *(x+(j+1))=temp;
    }
}
void _and(int *a,int *b,int y,int z){
    int i=0,j=0;
    while(i<y&&j<z){
        if(*(a+i)<*(b+j))
            i++;
        else if(*(a+i)>*(b+j))
            j++;
        else{
            printf("%d ",*(a+i));
            i++;j++;
        }
    }
    printf("\n");
}
void _or(int *a,int *b,int y,int z){
    int i=0,j=0;
    while(i<y&&j<z){
        if(*(a+i)<*(b+j))
            {
                printf("%d ",*(a+i));
                i++;
            }
        else if (*(a+i)>*(b+j))
            {
                 printf("%d ",*(b+j) );
                j++;
            }
        else
            {
                printf("%d ",*(a+i) );
                i++;j++;
            }
    }
    while(i<y){
        printf("%d ",*(a+i) );
        i++;
    }
    while(j<z){
        printf("%d ",*(b+j));
        j++;
    }
    printf("\n");
}
