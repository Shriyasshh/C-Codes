#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];

};


int  main(){

    struct employee e1,e2,e3;

    printf("Enter Code :");
    scanf("%d",&e1.code);
    printf("Enter Name :");
    scanf("%s",&e1.name);
    printf("Enter Salary:");
    scanf("%f",&e1.salary);
    printf("%d, %.2f , %s \n",e1.code,e1.salary,e1.name);

    printf("Enter Code :");
    scanf("%d",&e2.code);
    printf("Enter Name :");
    scanf("%s",&e2.name);
    printf("Enter Salary:");
    scanf("%f",&e2.salary);
    printf("%d, %.2f , %s \n",e2.code,e2.salary,e2.name);

    printf("Enter Code :");
    scanf("%d",&e3.code);
    printf("Enter Name :");
    scanf("%s",&e3.name);
    printf("Enter Salary:");
    scanf("%f",&e3.salary);
    printf("%d, %.2f , %s \n",e3.code,e3.salary,e3.name);

    return 0;
}