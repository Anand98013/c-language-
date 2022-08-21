#include <stdio.h>
int main()
{
    int n, original, remainder, reversed = 0, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    original = n;

    while (original != 0)
    {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (result == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}
