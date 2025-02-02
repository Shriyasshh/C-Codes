#include <stdio.h>
int sum(int);

int sum(int no)
{
    if (no > 0)
    {
        return no + sum(no - 1);
    }
}
int main()
{
    int s=sum(5);
    printf("The sum is %d",s);
    return 0;
}