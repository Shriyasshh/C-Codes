#include <stdio.h>

int  main(){
    int marks[5];
    printf("Enter the marks\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("Marks value is %d %d %d\n",marks[0],marks[1],marks[2]);
    for (int i = 0; i < 5; i++)
    {
        printf("The address Marks in index %d is %d\n",i,&marks[i]);
    }
    
    return 0;
}