#include <stdio.h>

int  main(){
    int i=5;
    printf("The value of i is %d \n",i);
    i=i+5;
    printf("The value of i is %d \n",i);
    // i++;
    // printf("The value of i is %d \n",i);
    // ++i;
    printf("The value of i is %d \n",i++);

    // i++ prints first and then increments(Post increment operation)
    // ++i increments first and then prints (Post increment operation)
    // i-- prints first and then decrements(Post decrement operation)
    // --i decrements first and then prints (Post decrement operation)

    i+=5;  //same as i=i+5
    printf("The value of i is %d \n",i);

    
return 0;
}