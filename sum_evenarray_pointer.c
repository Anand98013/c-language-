#include <stdio.h>
int main()
{
    int a[10], *ptr, i, e = 0;
    printf("Enter 10 Numbers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    ptr = a;
    for (i = 0; i < 10; i++)
    {
        if (*ptr % 2 == 0)
            e = e + *ptr;
        ptr++;
    }
    printf("\nSum of Even Numbers = %d", e);
    return 0;
}