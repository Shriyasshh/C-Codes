#include<stdio.h>
#include<string.h>

void main(){
    char a[20]="Program";
    char b[20]={'p','r','o','g','r','o','m'};
    
    // using the %zu format specifier to print size_t
    printf("Length of str a= %zu \n",strlen(a));
    printf("Length of str a= %d \n",strlen(a));
    printf("Length of str b= %zu \n",strlen(b));
    printf("Length of str b= %d \n",strlen(b));
    
    
}