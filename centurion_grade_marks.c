#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks (0-100): ");
    scanf("%d" ,&marks);
    if(marks >= 95 && marks == 100){
        printf("O GRADE");
    }
    else if(marks >= 90 && marks < 95){
        printf("E GRADE");
    }
    else if(marks >= 80 && marks < 90){
        printf("A GRADE");
    }
    else if(marks >= 70 && marks < 80){
        printf("B GRADE");
    }
    else if(marks >= 60 && marks < 70){
        printf("c GRADE");
    }
    else if(marks >= 50 && marks < 60){
        printf("D GRADE");
    }
    else if(marks < 50){
        printf("FAIL");
    }
    return 0;

}