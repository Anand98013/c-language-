#include<stdio.h>
int gcd(int a, int b);
int main(){
    int a,b,GCD,LCM;
    printf("enter the two number:");
    scanf("%d%d",&a,&b);
    GCD=gcd(a,b);
    LCM=(a*b)/GCD;
    printf("GCd of %d and %d is= %d\n",a,b,GCD);
    printf("Lcm of %d and %d is= %d\n",a,b,LCM);
    return 0;

}
int gcd(int x, int y){
    int g,m,n;  
    if(x>y)
    {
        m=x;
        n=y;
    }
    else
    {
        m=y;
        n=x;
    }
    while(m!=n)
    {
        if(m%n==0){
            y=n;
            break;
        }
        y=n;
        n=m%n;
        m=y;
    }
    
    return x;
}
