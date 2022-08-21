#include <stdio.h>
int main()
{
    int a, b;
    {
        printf("enter the first number; ");
        scanf("%f", &a);
        printf("enter the second number");
        scanf("%f", &b);
    }
    if (a < b)
    {
        printf("a is smaller");
    }
    else
    {
        printf("b is greater");
    }
    return 0;
}
