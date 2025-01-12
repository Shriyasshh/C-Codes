#include <stdio.h>

int  main(){
    int a=10;
    int b=3;
    float c=10/3;
    printf("Value of a/b : %f\n",c);
    float d=13.4;
    int e=10;
    float f=d/e;
    printf("Value of d/e : %f\n",f);
    float g=7.8;
    float h=10;
    float i=g/h;
    printf("Value of g/h : %f\n",i);
    int j=10.5;
    printf("Value of j : %d\n",j);
    int k=3.0/9;
    printf("Value of k : %d\n",k);
    // rules
    // 1. int/int = int
    // 2. int/float = float
    // 3. float/int = float
    // 4. float/float = float
    return 0;
}  