#include <stdio.h>

void main()
{
    // which is invalid
    // 1         Valid
    int a = 1;
    int b = a;
    printf("%d",b);

    // 2         Valid
    int v = 3 * 3;
    printf("%d",v);
    // 3     Invalid
    // char dt = '21 dec 2020';
    // printf("%s", dt);
    // return 0;
}