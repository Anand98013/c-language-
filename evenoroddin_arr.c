#include <stdio.h>
int main()
{
    int array[100], i, num;
    printf("Enter the size of an array: ");

    scanf("%d", &num);
    printf("Enter the elements of the array: ");

    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Even numbers in the array are - \n");
    for (i = 0; i < num; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d \n", array[i]);
        }
    }
    printf("Odd numbers in the array are -\n");
    for (i = 0; i < num; i++)
    {
        if (array[i] % 2 != 0)
        {
            printf("%d \n", array[i]);
        }
    }
    return 0;
}