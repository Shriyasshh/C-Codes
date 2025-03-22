#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="apple";
    char str2[]="apple";
    if(strcmp(str1,str2)==0)
    {
        printf("The strings are identical\n");
    }
    else
    {
        printf("The string are different\n");
    }
    
    return 0;
}