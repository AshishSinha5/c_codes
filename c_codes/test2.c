#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    enum emp_dept{
    assembly,manufacturing,accounts,sales};
    struct employee{
        char name[50];
        float salary;
        enum emp_dept department;
    }e;
    strcpy(e.name,"Raman");
    e.salary=12930.2343;
    e.department = accounts;
    printf("%d",e.department);
    return 0;
}
