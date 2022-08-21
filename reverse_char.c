#include <stdio.h>

int main()
{
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    char length = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < length; i++)
    {
        printf("%c ", arr[i]);
    }

    printf("\n");

    printf("Array in reverse order: \n");
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c ", arr[i]);
    }
    return 0;
}