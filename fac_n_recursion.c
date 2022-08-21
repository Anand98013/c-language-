#include<stdio.h>
int fact(int n);

int main()
{
    printf("fact is: %d ", fact(5));
    return 0;
    

}

int fact(int n){
    if(n==0){
        return 1;
    }
    int factnm1=fact(n-1);
    int factn = factnm1*n;
    return factn;
}