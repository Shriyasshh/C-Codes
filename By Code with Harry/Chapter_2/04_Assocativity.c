#include <stdio.h>

int  main(){
    int a=3;
    int b=6;
    int c=9;
    printf("The value is; %d\n",a*b/c+7);
    printf("The value is; %d\n",3*b/2*c+7*a);
    // 3*b/2*c+7*a
    // 3*6/2*c+7*a
    // 18/2*c+7*a
    // 9*9+7*a
    // 81+7*3
    // 81+21
    // 102
    return 0;
}