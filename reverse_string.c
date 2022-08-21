#include<stdio.h>
int length(char* string) {

	int count = 0;
	while (string[count] != '\0') {
		++count;
	}
	return count;

}
void reverse(char* string) {

	char temp;
	int i, j, n;
	n = length(string);
	for (i = 0, j = n - 1; i < j; ++i, --j) {
		temp = string[j];
		string[j] = string[i];
		string[i] = temp;
	}
}
int main()
{
	char string[100];
	printf("Enter a String: ");
	scanf("%s", string);

	printf("\nString Before Reverse: %s", string);
	reverse(string);
	printf("\n\nString After Reverse: %s", string);
}