#include <stdio.h>

int main()
{   
    
    int no[] = {4,7,2,54,75,85,43,55,2,8,6,},temp;
    int size = sizeof(no) / sizeof(no[0]);
    // printf("size %d\n",size);


    for (int i = 0; i < size; i++)
    {
        for (int i = 0; i < size; i++)
        {
            // printf("%d,%d \n",no[i], no[i + 1]);
            if (no[i] > no[i + 1])
            {
                temp = no[i];
                no[i] = no[i + 1];
                no[i + 1] = temp;
            }
            // printf("%d\n", no[i]);
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\n",no[i]);
    }
    
    return 0;
}