#include <stdio.h>

int main()
{
    int marks[] = {34, 53, 65, 75};

    // int* ptr=marks[0];      //same as int* ptr=&marks[0]
    for (int i = 0; i < 4; i++)
    {
        int *ptr = &marks[i];
        printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *ptr);
    }
    return 0;
}
