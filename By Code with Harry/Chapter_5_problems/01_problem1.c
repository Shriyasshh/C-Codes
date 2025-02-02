#include <stdio.h>
float avg(int,int,int);

float avg(int a,int b,int c){
    return (a+b+c)/3;
}
int  main(){
    float c=avg(10,20,30);
    printf("The average of 3 nos is:%.2f",c);
    return 0;
}