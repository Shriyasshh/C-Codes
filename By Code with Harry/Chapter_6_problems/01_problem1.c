#include <stdio.h>

int  main(){
    int a=45;
    int* b=&a;
    printf("Address of a is :%p \n",&a);
    printf("value at  b is :%d \n",*b);
    return 0;
}