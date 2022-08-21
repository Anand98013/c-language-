#include<stdio.h>
int main()
// odd or even number in n times
{
    int i,n;
    printf("even number list\n");
    printf("enter the value: ");
    scanf("%d",&n);
    i=1;
    
    while(i<=n){
        if(i%2 == 0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    
    printf("odd number list\n");
    i=1;
    
    while(i<=n){
        if(i%2 != 0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    
    return 0;
}
