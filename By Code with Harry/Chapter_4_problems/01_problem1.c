#include <stdio.h>

int  main(){
    float no,i=1;
    printf("Enter a number: ");
    scanf("%f",&no);
    while (i<=10)
    {
        printf("%.0f x %.0f =%.1f \n",no,i,no*i);
        i++;
    }
    for(int x=1 ; x<=10; x++)
    {
        printf("%.0f x %d =%.1f \n",no,x,no*x);
    }
    return 0;
}