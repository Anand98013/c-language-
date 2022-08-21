#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the three number\n: ");
    scanf("%f" "%f" "%f",&a,&b,&c);
    if(a<b && a<c){
        printf("a is smaller ");
    }
    else if(b<a && b<c){
        printf("b is smaller");
    } 
    else{
        printf("c is smaller");
    }
    return 0;
}