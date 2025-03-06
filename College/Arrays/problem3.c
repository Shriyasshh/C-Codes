#include <stdio.h>

int main() {
    // Define an array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Print the number of elements in the array
    printf("Number of elements in the array: %d\n", size);
    
    return 0;
}
