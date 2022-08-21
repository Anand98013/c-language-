#include<stdio.h>
int main()
{
int a,b,t;
a=5;
b=6;
printf("%d\n",a);
printf("%d\n",b);
t=a;
a=b;
b=t;
printf("%d\n",a);
printf("%d\n",b);
return 0;
}
