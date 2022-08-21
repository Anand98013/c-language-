#include<stdio.h>
int main()
{
    int g,x,y,n,d,l,r;
    printf("enter the two number:");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        n=x;
        d=y;
    }
    else
    {
        n=y;
        d=x;
    }
    r=n%d;
    while(r!=0)
    {
        n=d;
        d=r;
        r=n%d;
    }
    g = d;
    l=x*y/g;
    printf("GCd of %d and %d = %d\n",x,y,g);
    printf("Lcm is %d and %d = %d\n",x,y,l);
    return 0;
}
