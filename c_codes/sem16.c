#include<stdlib.h>
#include<stdio.h>
int main()
{
    struct student
    {
        int age;
        char name[50];
    };
    struct student s1 = {12,"Ashish"};
    struct student *p = &s1;
    printf("%d,%s",p->age,p->name);
    return 0;
}
