#include<stdio.h>

void main(){
    int a=3, b=6 ,c;
    c=a+b;
    printf("Addition of 2 nos:%d",c);
    
    c=b-a;
    printf("Subtraction of 2 nos.:%d",c);

    c=a*b;
    printf("Multiplication of 2 nos.:%d",c);

    float r=4 , pi=3.14 ,area;
    area=pi*r*r;
    printf("The area of circle is:%f",area);


    float pi=3.14 , area,r;
    printf("Enter radius of circle:");
    scanf("%f",&r);
    area=pi*r*r;
    printf("Area of circle:%f",area);

    int l,b,area;
    printf("Enter length and breadth of rectangle:");
    scanf("%d%d",&l,&b);
    area=l*b;
    printf("Area of rectangle:%d",area);


}
