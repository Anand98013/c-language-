#include<stdio.h>
int main()
{
    int i,n,fact;
    printf("enter the value!! ");
    scanf("%d",&n);
    i=1;
    fact=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of the %d is =%d",n,fact);
    return 0;
}