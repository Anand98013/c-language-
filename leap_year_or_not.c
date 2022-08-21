#include<stdio.h>
int main()
{
    int year;
    printf("enter the  number: ");
    scanf("%d",&year);

    if(year%400 == 0)
    {
         printf("it is a leap yaer");
    }
    else{
        if(year%100 == 0)
    {
        printf("it is not leap year");
    }
    else
    { 
        if(year%4 == 0)
        {
            printf("it is a leap yaer");
        }
        else
        {
            printf("it is not leap year");
        }
    }
    }
    return 0;
}