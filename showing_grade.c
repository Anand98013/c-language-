#include<stdio.h>
int main()
// sowing grade using switch
{
    int score;
    
    printf("enter the score : ");
    scanf("%d" ,&score);
    
    switch (score/10){
        case 10: 
        case 9:
        printf("overstanding");
                 break;
        case 8:  printf("excellent");
                 break;
        case 7:  printf("good");
                 break;
        case 6:  printf("average");
                 break;
        case 5:  printf("poor");
                 break;
        case 4:  printf("bad");
                 break;
        case 3:  printf("fail");
                 break;
        case 2:
        case 1:printf("fail");
                break;
        default : printf("invalid input");     

        }
        return 0;
    } 