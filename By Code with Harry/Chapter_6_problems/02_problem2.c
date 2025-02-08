#include <stdio.h>

int Return_5(int* ptr)
{
    printf("The value of ptr is %d\n",ptr);
    printf("The value at ptr is %d",*ptr);
    return 5;
}
int  main(){
    int i=5;
    int *ptr=&i;
    printf("Address of i is :%u \n",&i);
    Return_5(ptr);
    return 0;
}