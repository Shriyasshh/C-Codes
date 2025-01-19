// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html#include <stdio.h>
#include <stdio.h>

int main()
{
    char ch = 'D';
    printf("The character is %c \n", ch);
    printf("The character is %d \n", ch);
    // 97-112
    if (ch >= 97 && ch <= 112)
    {
        printf("It is a lowercase letter");
    }
    else
    {
        printf("It is a uppercase letter");
    }
    return 0;
}