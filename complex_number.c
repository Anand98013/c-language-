#include <stdio.h>
typedef struct complex {

    int real, img;
} complex;
complex sumcomplex(complex a, complex b)
{
    struct complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}
int main()
{
    struct complex a = {1, 2};
    struct complex b = {4, 5};
    struct complex c = sumcomplex(a, b);
    printf("Complex number 1: %d + i%d\n", a.real, a.img);
    printf("Complex number 2: %d + i%d\n", b.real, b.img);
    printf("Sum of the complex numbers: %d + i%d\n", c.real, c.img);
    return 0;
}
