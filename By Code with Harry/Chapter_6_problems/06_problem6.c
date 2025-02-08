#include <stdio.h>
int change(int a){
    return a*=10;
}
int  main(){
    int a=5;
    printf("%d\n",a);
    int b=change(a);
    printf("%d",b);
    return 0;
}