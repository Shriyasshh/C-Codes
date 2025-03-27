#include <stdio.h>

int fact(int no);

int fact(int no)
{
        if(no==0 || no==1)
        {
            return 1;
        }
        else
        {
            return no*fact(no-1);
        }

}
int  main(){

    int no;
    printf("Enter the number");
    scanf("%d",&no);
    int result=fact(no);
    printf("Factorial of %d is: %d",no,result);

    return 0;
}