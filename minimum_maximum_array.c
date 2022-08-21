#include <stdio.h>
int main()
{
    int a[1000], i, n, max, min;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    printf("maximum of array is : %d\n", max);
    printf("minimum of array is : %d\n", min);
    return 0;
}
