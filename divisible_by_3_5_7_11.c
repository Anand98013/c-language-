#include<stdio.h>
int main()
{
    int num;
    printf("enter the nuber : ");
    scanf("%d" , &num);
    if((num%3 == 0)||(num%5 ==0)||(num%7 == 0)||(num%11 ==0))
    {
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}

    