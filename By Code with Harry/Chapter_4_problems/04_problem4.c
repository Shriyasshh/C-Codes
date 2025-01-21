#include <stdio.h>

int main()
{
    int no = 8,sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += no * i;
        printf("%d \n", sum);
    }
    printf("sum of no  in the table of 8 :%d\n", sum);
    return 0;
}