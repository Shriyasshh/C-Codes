#include <stdio.h>
int sum(int*,int*);

int sum(int* a,int* b){
    *a=6;
    return *a+*b;
}
int  main(){
    int x=2,y=7;
    printf("The value od sum is %d\n", sum(&x,&y));
    printf("The value of x is %d\n",x);
    return 0;
}