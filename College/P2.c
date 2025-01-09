//Simple Calculator
#include<stdio.h>

void main(){
    float a,b,add,sub,pro,div;
    printf("Enter two values:");
    scanf("%f%f",&a,&b);
    add=a+b;
    sub=a-b;
    pro=a*b;
    div=a/b;
    printf("Addition of 2 nos: %f\n",add);
    printf("Substraction of 2 nos: %f\n",sub);
    printf("Multiplication of 2 nos: %f\n",pro);
    printf("Division of 2 nos: %f\n",div);

}   