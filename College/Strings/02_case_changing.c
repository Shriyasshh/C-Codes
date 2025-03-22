#include<stdio.h>
#include<string.h>
#include<ctype.h>


void main()
{
    char str[21]="cse fy jnec students";
    char str1[10]="Operator";

    //to lowercase
    
    for(int i=0; str[i];i++)
    {
        str[i]=toupper(str[i]);
    }
        printf("%s\n",str);

    //to Uppercase
    for(int i=0; str1[i];i++)
    {
        str1[i]=tolower(str1[i]);
    }
    
    printf("%s ",str1);
    
}