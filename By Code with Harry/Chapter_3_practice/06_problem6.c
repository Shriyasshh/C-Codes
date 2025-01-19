#include <stdio.h>

int  main(){
    int a,b,c,d;
    printf("Enter 4 numbers: \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a>b &&a>c && a>d){
        printf("The largest number is %d",a);
    }
    else if (b>c &&b>d){
        printf("The largest number is %d",b);
    }
    else if (c>d){
        printf("The largest number is %d",c);
    }
    else{
        printf("The largest number is %d",d);
    }
    
    return 0;
}