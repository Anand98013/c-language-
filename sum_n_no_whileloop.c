#include<stdio.h>
int main()
// sum of first n natural number
{
    int i,n,sum=0;
    printf("enter the value: ");
    scanf("%d",&n);
    
    i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("%d\n",sum);

    return 0;
}


