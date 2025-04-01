#include <stdio.h>

int  main(){

    char st[]={'a','b','c','d','\0'};
    char str[]="abcde";
    printf("%s\n",st);
    printf("First character is %c \n",st[0]);
    for (int j = 0; j < 10; j++)
    {
        printf("%c\n",str[j]);
    }
    
    


    return 0;
}