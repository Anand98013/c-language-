#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number: ");
    scanf("%d",&n);
    if (n==1)
    {
        printf("natural number");
        return 0;
    }
    for (int  i = 0 ; i <=n; i++)
    {
        if (i%2==0)
        {
            printf("it is not prime number");
            break;
        }
        
        if (n==i)
        {
        printf("it is a prime number");
        }
    }
    return  0; 
    
}