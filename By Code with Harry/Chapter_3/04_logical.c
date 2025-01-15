#include <stdio.h>

int  main(){
    int a=1,b=1;
    printf("Value of a and b is:%d \n",a&&b);   //&& = and
    printf("Value of a and b is:%d \n",a||b);   //|| = or
    printf("Value of a and b is:%d \n",!a);     //! = not
    
    if(a&&b){
        printf("Both are true\n");
    }
    //is same as writing ....
    if(a){
        if(b){
        printf("Both are true\n");
    }}
    return 0;
}