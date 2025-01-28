#include <stdio.h>

// Function prototype
int sum(int, int);
void display();

// Function definition
int sum(int x, int y)
{
    printf("The sum is %d \n", x + y);
    return x + y;
}

int main()
{
    int a = 1;
    int b = 2;
    sum(a, b);

    int x = 10, y = 20;
    int z = sum(x, y);
    printf("%d", z);

    int i;          // variable declaration
    void display(); // Function

    return 0;
}

void display()
{
    printf("Hello I am display");
}