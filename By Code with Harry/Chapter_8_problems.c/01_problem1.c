#include <stdio.h>

int  main(){

    char str[4];
    // scanf("%s", &str);
    // printf("%s", str);
    
    for (int i = 0; i < 4; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);  //or

    }
    str[4] = '\0';
    for (int i = 0; i < 4; i++)
    {
        printf("%c", str[i]);
        
    }
    

    return 0;
}