#include <stdio.h>

int  main(){
    int no,i=1,x=1;
    printf("Enter a no:");
    scanf("%d",&no);
    while(i<=10)
    {
        printf("%d x %d= %d \n",no,i,no*i);
        i++;
    }
    printf("--\n");

    do
    {
        printf("%d x %d= %d \n",no,x,no*x);
        x++;
    } while (x<=10);
    printf("--\n");

    for (int y = 1; y<=10; y++)
    {
        printf("%d x %d= %d \n",no,y,no*y);
    }
    
    return 0;
}