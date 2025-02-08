#include <stdio.h>

int  main(){
    int a=45;
    int* ptr1=&a;
    int** ptr2=&ptr1;
    printf("Address of a is :%p \n",&a);
    printf("value at  ptr1 is :%d \n",*ptr1);
    printf("value at  ptr2 is :%d \n",ptr2);
    return 0;
}