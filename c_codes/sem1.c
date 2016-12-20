#include<stdio.h>
#include<stdlib.h>
#define CUBE(x) (x*x*x)
int main()
{
    int class_size = 3,i;
    struct student
    {
        char name[50];
        float age;
        int id;
    };
    struct student *s;
    s = (struct student *)calloc(class_size,sizeof(struct student));
    for(i=0;i<class_size;i++){
        printf("Name - ");
        scanf("%s",&s[i].name);
        printf("Age - ");
        scanf("%f",&s[i].age);
        printf("ID - ");
        scanf("%d",&s[i].id);
    }
    free(s);
    printf("\n%d\n%d",sizeof(int),sizeof(char));
    return 0;
}
