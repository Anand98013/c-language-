#include<stdio.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);

    printf("even number list");
   for(int i=1; i<=n; i=i+1){
       if(i%2==0){
           printf("%d\t",i);
       }
   }

   printf("odd number list");
    for(int i=1; i<=n; i=i+1){
       if(i%2 !=0){
           printf("%d\t",i);
       }    
   }

    return 0;
}



