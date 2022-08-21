#include<stdio.h>
int printtable(int n);
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    printtable(n); //argument / actual parameter
    return 0;

}
int printtable(int n){  // parameter / formal parameter
    for (int i = 0; i <= 10 ; i++)
    {
        printf("%d\n",i*n);
    }
    
}