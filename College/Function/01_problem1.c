#include <stdio.h>

int fact(int no);

int fact(int no)
{
    int fac=1;
    for(int i=no;i>0;i--)
    {
        fac*=i;
    }
    return fac;

}
int  main(){

    int no;
    printf("Enter the number");
    scanf("%d",&no);
    int result=fact(no);
    printf("Factorial of %d is: %d",no,result);

    return 0;
}