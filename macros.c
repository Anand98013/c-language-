#include<stdio.h>
void leapyear(int n);
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    leapyear(n);
    return 0;


}

void leapyear(int n){
    if(n%400 && n%4 )
    {
        printf("%d is leap year");
    }
    else if(n%100)
    {
        printf("%d is not leap year");
    }
}