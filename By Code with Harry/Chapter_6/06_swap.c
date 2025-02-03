#include <stdio.h>

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int  main(){
    int a=6,b=10;
    swap(&a,&b);
    printf("The value of a is %d and b is %d",a,b);
    return 0;
}