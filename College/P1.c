#include<stdio.h>
// Area and Circumference of Stadium
void main(){
    float pi=3.14 , area,r, circum;
    printf("Enter radius of Stadium:");
    scanf("%f",&r);
    area=pi*r*r;
    circum=2*pi*r;
    printf("Area of Stadium: %f\n",area);
    printf("Circumference of Stadium: %f",circum);

} 
