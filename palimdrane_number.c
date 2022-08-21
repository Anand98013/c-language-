#include <stdio.h>
int main()
{
    int remainder, reverse = 0, n, original;
    printf("enter the number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    if (original == reverse)
    {
        printf("it is palimdrone number");
    }
    else
    {
        printf("it is not palimdrone number");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("it is natural number");
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("it is not prime number");
            break;
        }

        else
        {
            printf("it is prime number");
        }
    }
    return 0;
}