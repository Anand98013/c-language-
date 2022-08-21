#include<stdio.h>
int main()
// print 0-n natural number
{
    int i,n;
    printf("enter the number: ");
    scanf("%d",&n);
    i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
        
    }
 
    return 0;
}