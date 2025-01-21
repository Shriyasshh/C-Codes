    #include <stdio.h>

    int main()
    {
    int sum = 0, x = 1, j = 1;
    // using for
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);

    // using while
    while (x <= 10)
    {
        sum = sum + x;
        x++;
    }
    printf("%d\n", sum);

    // using do while
    do
    {
        sum = sum + j;
        j++;
    } while (j <= 10);

    printf("%d", sum);

    return 0;
    }