#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,temp,n;
    printf("Enter a no.-");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

    return 0;
}
