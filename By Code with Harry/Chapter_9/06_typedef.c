#include <stdio.h>
#include <string.h>

typedef struct employee  
{
    int code;
    float salary;
    char name[10];

} Emp;  //Emp is name for this func/struct

int  main()
{

    // typedef int harry;
    // harry a=55;
    // printf("%d",a);
    
    // typedef struct employee  Emp;

    Emp e1 ;        //or // struct employee e1;
    e1.code=110;
    e1.salary=500;
    strcpy(e1.name,"Sahil");
    printf("%d %s %.2f",e1.code,e1.name,e1.salary);


    return 0;
}