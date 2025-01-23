#include <stdio.h>

int main()
{
    int age;
    char ms, gender;
    printf("Enter your age and gender),marriage\n");            //(for male=m and female=f)
    scanf("%d %c %c", &age, &gender,&ms);
    // printf("Enter your marriage status:");
    // scanf("%c", &ms);

    
    if (age >= 30 && gender == 'm' && ms== 'u' )
    {
        printf("You are insured");
    }
    else if (age >= 25 && gender =='f' && ms!='m' )
    {
        printf("You are insured");
    }
    else if (ms== 'm')
    {
        printf("You are insured");
    }
    else
    {
        printf("You are  not insured");
    }

    return 0;
}