/*Write a program to read marks from keyboard 
and your program should display equivalent grade 
according to following table(if-else-if ladder)
Marks Grade
100 - 80 Distinction
79 - 60 First Class
59 - 40 Second Class
< 40 Fail
*/

#include <stdio.h>

void main(){
        float m1;

    printf("Enter total marks in subjects:");
    scanf("%f",&m1);
    if (m1>=80 && m1<=100){
        printf("Distinction");
    }
    else if(m1>=60 && m1<80){
        printf("First class");
    }
    else if(m1>=40 && m1<60){
        printf("Second class");
    }
    else{
        printf("Fail");
    }
    
}