#include <stdio.h>

int main()
{
    int no, product = 1;
    printf("Enter a number: ");
    scanf("%d", &no);
    // using for
    for (int i=1;i<=no;i++){
        product*=i;
    }

    // using while
    int i = 1;
    while (i <= no)
    {
        product *= i;
        i++;
    }

    printf("The factorial of %d is %d", no, product);
    return 0;
}