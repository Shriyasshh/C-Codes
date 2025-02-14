#include <stdio.h>

int main()
{
    int no, sum = 0;
    printf("Enter a no :");
    scanf("%d", &no);
    int temp = no;
    int digit;

    while (temp > 0)
    {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp = temp / 10;
    }

    if (no == sum)
    {
        printf("This is an Armstrong No.\n");
    }
    else
    {
        printf("This is not an Armstrong No.\n");
    }

    return 0;
}
