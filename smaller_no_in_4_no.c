#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the number a:\n ");
    scanf("%d" ,&a);
    printf("enter the number b: \n");
    scanf("%d" ,&b);
    printf("enter the number c: \n");
    scanf("%d" ,&c);
    printf("enter the number d: \n");
    scanf("%d" ,&d);
    if(a<b){
        if(a<c){
            if(a<d)
            {
                printf("a is smallest");
            }
        }
        
    }
    else{
        if(b<c){
            if(b<d){
                if(b<a)
                {
                    printf("b is smallest");
                }

            }
        }
    }
    if(c<d){
        if(c<a){
            if(c<b)
                {
                    printf("c is smallest");
                }
                }
            }
    else
    {
        printf("d is smallest");
    }
        return 0;
}
   
                  