#include <stdio.h>
int fact(int);

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int no = 5;
    int soln = fact(no);
    printf("The factorial of no %d is %d", no, soln);

    return 0;
}