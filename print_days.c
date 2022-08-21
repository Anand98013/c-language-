#include<stdio.h>
int main()
{
    int week;
    printf("enter the day : ");
    scanf("%d" ,&week);
    switch (week){
        case 1 : printf("monday");
                 break;
        case 2:  printf("tuesday");
                 break;
        case 3:  printf("tuesday");
                 break;
        case 4:  printf("tuesday");
                 break;
        case 5:  printf("tuesday");
                 break;
        case 6:  printf("tuesday");
                 break;
        case 7:  printf("tuesday");
                 break;
         default : printf("not a valid day!");        

        }
        return 0;
    } 