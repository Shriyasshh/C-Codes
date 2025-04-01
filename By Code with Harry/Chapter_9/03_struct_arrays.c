#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];

};

int  main()
{

    struct employee facebook[100];

    // for (int i = 0; i < 100; i++)
    // {
    //     printf("Enter Code :");
    //     scanf("%d",&facebook[i].code);
    //     printf("Enter Name :");
    //     scanf("%s",&facebook[i].name);
    //     printf("Enter Salary:");
    //     scanf("%f",&facebook[i].salary);
    // }

// or
    struct employee Bob={100,50000,"Rahul"};
    printf("%d,%.2f,%s",Bob.code,Bob.salary,Bob.name);

    return 0;
}