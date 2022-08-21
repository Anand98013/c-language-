#include<stdio.h>
#include<math.h>
int squarenumber(float number);
int main(){
    int n=4;
    printf("%f",pow(n,2));
    return 0;
}
int squarenumber(float number){
    number =  number*number;
    printf("%f",number);

}