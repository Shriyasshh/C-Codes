#include <stdio.h>
#include <string.h>
int main()
{

    char st[] = "Hello";

    // strlen is a function that returns the length of the string.
    // printf("Length of String :%d", strlen(st));

    // strcpy is a function that copies a string into another string.
    // char target[30];
    // strcpy(target, st);     //(target, source)
    // printf("\nCopied String :%s", target);

    //strcat is a function that concatenates two strings.
    // char a[]="Hello ";
    // char b[]="World!";
    // strcat(a,b);       //b is added to a
    // printf("\nConcatenated String :%s", a);

    // strcmp is a function that compares two strings using ascii values order.
    int x=strcmp("Hello","hello");
    printf("%d \n",x);
    
    int y=strcmp("Hello","Hello");
    printf("%d \n",y);
    
    int i=strcmp("Hello","A Hello");
    printf("%d \n",i);

    int z=strcmp("far","joke");
    printf("%d \n",z);

    int j=strcmp("far","a joke");
    printf("%d \n",j);
    
    int k=strcmp("a far","joke");
    printf("%d \n",k);
    
    
    return 0;
}