#include <stdio.h>

int count(int arr[], int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            count++;
        }
    }
    return count;
    // printf("%d ",count);
}

int main()
{

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,-2,-54,-7};
    int n=sizeof(a)/sizeof(a[0]);
    int no=count(a,n);
    printf("%d ",no);
    return 0;
}