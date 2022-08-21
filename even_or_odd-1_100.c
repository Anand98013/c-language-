#include<stdio.h>
int main()
{
    printf("even number list\n");
    for(int i=1; i<=100; i=i+1){
        
        if(i%2==0){
            printf("%d\n",i);
        }
    }
        printf("odd number list\n");
    for(int i=1; i<=100; i=i+1){
        if(i%2 != 0)
        printf("%d\n",i);   
    }
    return 0;
}