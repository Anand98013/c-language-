#include<stdio.h>
int number();

int main(){

    number();
    return 0;
}

int number(){
     int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("even number");
    }
    else{
        printf("odd number");
    }
}
