#include <stdio.h>

int main()
{
    int i = 0;
    // runs code at least once
    // runs code first then checks condition
    do
    {
        printf("The value of i is %d \n", i);
        i++;
    } while (i < 5);

    return 0;
}