#include <stdio.h>

int  main(){
    int i=72;
    int* j=&i;                                  // j is a pointer pointing to i
    int k=68;
    printf("The address of i is %p\n", &i);     //%p is used to print the address
    printf("The address of i is %u\n", &i);     //%u is used to print the address in no.
    printf("The address of i is %p\n", j);     //%u is used to print the address in no.
    printf("The address of k is %p\n", &k);     //%u is used to print the address in no.


    printf("The value at address j is %d\n",*j);        //* is used to print the value at the address
    printf("The value at address j is %d\n",*&i);       //& is used to print the address
    printf("The value at address j is %d\n",i);
    return 0;
}