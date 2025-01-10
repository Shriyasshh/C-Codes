#include <stdio.h>
// convert celsius to fahrenheitṇ
int  main(){
    float c;
    float f;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&c);
    f=(9*c)/5+32;
    // f=(9.0/5.0)*c+32;
    printf("The temperature in fahrenheit is: %f",f);
    return 0;
}