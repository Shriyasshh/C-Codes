#include <stdio.h>
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf(" \n");
}

void reverse(int arr[],int n)
{
    for (int i = 0; i < n/2;  i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    
}


    

int  main(){

    int arr[]={1,3,5,7,4,35,454,54,2,57,4,8,};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    printArray(arr,n);


    return 0;
}


// i from 0- n/2 
//arr[i] = arr[n-i-1]