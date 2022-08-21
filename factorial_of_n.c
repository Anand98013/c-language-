#include<stdio.h>
int fact(int n);
int main(){
    printf("factorial is : %d",fact(5));
}

int fact(int n){
    if(n==1){
        return 1;
    }
    int a=fact(n-1);
    int b=a * n;
    return b;
    }