#include <stdio.h>
int main()
{
    int i, n;
    printf("enter the number");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("it is natural number");
        return 0;
    }
    for (i = 2; i <n; i++)
    {
        if (n % i == 0)
        {
            printf("it is not prime number");
            break;
        }
    }
    if (i == n)
    {
        printf("it is prime number");
    }

    return 0;
}
