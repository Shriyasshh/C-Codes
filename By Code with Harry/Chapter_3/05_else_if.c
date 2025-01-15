#include <stdio.h>

int  main(){
    int age=25;

    if (age>=65){
        printf("You can drive and you are senior citizen");
    }
    else if (age>18){
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }
    return 0;
}