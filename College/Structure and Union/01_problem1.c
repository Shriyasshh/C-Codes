#include <stdio.h>

struct Student 
{
    char name[20];
    int marks[5];
    int total;
    float percent;
};

int  main()
{

    struct Student S1;
    printf("Enter name");
    scanf("%s",&S1.name);
    S1.total=0;
    for (int  i = 0; i < 5; i++)
    {
        printf("Enter marks in Subject %d ",i+1);
        scanf("%d",&S1.marks[i]);
        S1.total+=S1.marks[i];
    }
    S1.percent=S1.total/5.0;

    printf("Student Name: %s \n",S1.name);
    printf("Total Marks: %d\n ",S1.total);
    printf("Percentage: %.2f \n",S1.percent);

    return 0;
}