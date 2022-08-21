#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the number a:\n ");
    scanf("%d" ,&a);
    printf("enter the number b: \n");
    scanf("%d" ,&b);
    printf("enter the number c: \n");
    scanf("%d" ,&c);
    printf("enter the number d: \n");
    scanf("%d" ,&d);
    printf("enter the number e: \n");
    scanf("%d" ,&e);
    if(a>b){
        if(a>c){
            if(a>d){
                if(a>e)
                {
                    printf("a is bigger");
                }
            }
        }
    }

    else{
        if(b>c){
            if(b>d){
                if(b>e){
                    if(b>a)
                    {
                        printf("b is bigger");
                    }
                    
                }

            }
        }
    }
    if(c>d){
        if(c>e){
            if(c>a){
                if(c>b)
                {
                    printf("c is bigger");
                }
            }
        }
    }
    if(d>a){
        if(d>b){
            if(d>c){
                if(d>e)
                {
                    printf("d is greater");
                }
            }
        }
    }
    else
    {
        printf("e is greater");
    }
    return 0;
}
                  