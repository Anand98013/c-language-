#include <stdio.h>
int Lcm(int x, int y);

int main()
{
    int a,b;
    printf("enter the two number ");
    scanf("%d%d", &a, &b);
    printf("Lcm is %d",Lcm(a,b));
    return 0;
}

int Lcm(int a,int b)
{
    int  i;
    for (i = 1; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("Lcm is %d\n", i);
            break;
        }
    }
    return 0;
}