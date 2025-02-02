#include <stdio.h>
float C2F(float);

float C2F(float c){
    return (c*1.8)+32;
}
int  main(){
    float f;
    f=C2F(45);
    printf("The temp in fahrenheit id :%.2f",f);
    
    return 0;
}