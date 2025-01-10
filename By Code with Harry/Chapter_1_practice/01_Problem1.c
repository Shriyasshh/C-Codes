#include <stdio.h>
// area of a rectangle
int  main(){
    // int length=3;
    // int breath=6;
    int length,breath;
    printf("Enter the length of rectangle: ");
    scanf("%d",&length);
    printf("Enter the breath of rectangle: ");
    scanf("%d",&breath);

    printf("The area of rectangle is %d",length*breath);
    return 0;
}