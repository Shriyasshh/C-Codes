#include <stdio.h>

int  main(){
    int m1,m2,m3;
    printf("Enter marks1: \n");
    scanf("%d",&m1);
    printf("Enter marks2: \n");
    scanf("%d",&m2);
    printf("Enter marks3: \n");
    scanf("%d",&m3);
    printf("The marks are %d %d %d \n",m1,m2,m3);
    
    if (m1<33 ||m2<33 ||m3<33){
        printf("You are fail due to less marks in individual subjects \n");
    }
    else if ((m1+m2+m3)/3 <40){
        printf("You are fail due to less percentage \n");
    }
    else{
        printf("You are pass");
    }
    return 0;
}