#include<stdio.h>
#include<string.h>

void main(){
    char first[10]="Hello! ";
    char second[10]="Universe";
    
    strcat(first,second);
    
    printf("%s",first);
}