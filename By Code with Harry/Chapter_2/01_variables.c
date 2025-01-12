#include <stdio.h>

int  main(){
    int i=10;
    int j=i;
    // invalid b=a+2 if b is already defined
    printf("value of i and j : %d , %d",i,j);

    int a,b,c;
    a=b=c=10;
    return 0;
}
