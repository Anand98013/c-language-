#include<stdio.h>
void square(int *n);

int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	square(&n);
	printf("numbre is %d",n);
	return 0;
}
//call by referebce
void square(int *n)
{
	*n= (*n) * (*n) ;
	printf("square of the number is %d\n",*n);
}

// #include<stdio.h>
// void _square(int n);

// int main()
// {
// 	int n =4;
// 	_square(n);
// 	printf("numbre is %d",n);
// 	return 0; 
// }
// //call by value
// void _square(int n)
// {
// 	n= n * n ;
// 	printf("square of the number is %d\n",n);
// }