/*A student will not be allowed to seat an exam if 
his/her attendance is less than 75%. take the following
input from the user, Number of classes held, Number of 
classes attended and print percentage of class attended is 
student is allowed to seat in exam or not.
*/

#include <stdio.h>

void  main(){
    float total,attend,calc;
    printf("Enter total no of classes:");
    scanf("%f",&total);

    printf("Enter no of classes attended:");
    scanf("%f",&attend);
    calc=(attend/total)*100;
    if (calc >=75){
        printf("You are eligible to sit in exam");
    }
    else{
        printf("You can't sit in exam");
    }

}