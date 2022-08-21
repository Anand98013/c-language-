#include<stdio.h>
int main()
{
    int a,b,L;
    printf("enter the two number ");
    scanf("%d%d",&a,&b);
    for(L=1 ; L<=a*b ; L++){
        if(L % a == 0 && L % b == 0){
            printf("Lcm is %d\n",L);
            break;
        }
    }
    return 0;
}