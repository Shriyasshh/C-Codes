#include <stdio.h>

int  main(){
    int num,sum=0,rem;
    printf("Enter a number");
    scanf("%d",&num);
    for(int i=num;i>0;i--)
    {
        rem=i%10;
        sum=sum+rem;
    }
    printf("sum=%d\n",sum);
    return 0;
}