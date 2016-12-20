#import<stdio.h>
#import<stdlib.h>
void display(int *);
void show(int **);
int main()
{
    int i,*j,*k;
    int marks[] = {10,20,30,40,50};
    for(i=0;i<5;i++)
        display(&marks[i]);
    j = &marks[4];
    k = (marks+4);
    printf("\n%d\n%d",j,k);
    return 0;
}
void display(int *n)
{

    show(&n);
}
void show(int **x)
{
    printf("%d ",**x);
}
