#include<stdio.h>
int main()
{
    char c;
    printf("enter the letter\n");
    scanf("%c",&c);

    if(c>='A' && c<='Z'){
        printf("upper case");
    }
    else if(c>='a' && c<='z'){
        printf("lower case");
    }
    else{
        printf("not an english letter");
    }

    return 0;
}
