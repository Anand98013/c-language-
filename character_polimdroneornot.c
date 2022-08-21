#include <stdio.h>
int isPalindrome(char *str);

int main()
{
	char    text[50]={0};
	char    ch;	
	int     cnt=0; 
	
	printf("enter  (valid set of characters): ");
	while(1)
	{
		ch=getchar();
		if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
			text[cnt++]=ch;
		else
			break; 
	}
	text[cnt]='\0';	
	printf("Entered string is: %s\n",text);
	
	if(isPalindrome(text))
		printf("%s is a palindrome string\n",text);
	else
		printf("%s is not a palindrome string\n",text);
	
	return 0;
}
int isPalindrome(char *str)
{
	int length=0;
	int i,ret=1;
	while(str[length]!='\0') length++;
	 
    for(i=0; i<length; i++)
	{
		if((str[0+i] != str[(length-1)-i]))
		{
			ret=0;
			break;
		}			
	} 	
	return ret;
}