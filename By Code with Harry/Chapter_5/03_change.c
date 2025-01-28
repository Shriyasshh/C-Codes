#include <stdio.h>

int sum(int, int);

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int z = sum(6,9);
    printf("%d", z);
    return 0;
}