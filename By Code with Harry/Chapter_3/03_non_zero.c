#include <stdio.h>
// c does not execute program with input 0
int  main(){
    if (1){
        printf("This if is executed\n");
    }
    if (2345){
        printf("This if is also executed\n");
    }
    if (3.43){
        printf("This if is also2 executed\n");
    }
    if ('c'){
        printf("This if is also3 executed\n");
    }
    if (0.1){
        printf("This if is also4 executed\n");
    }
    
    return 0;
}