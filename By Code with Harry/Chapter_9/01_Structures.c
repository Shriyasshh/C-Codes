#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{

    struct employee e1,e2;
    strcpy(e1.name,"Rahul");
    e1.salary=50000;
    
    printf("%d, %.2wf , %s",e1.code,e1.salary,e1.name);

    return 0;
}