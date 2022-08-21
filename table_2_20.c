 #include<stdio.h>
int main()
{
    int n=1, i, j;
    printf("Table from 1 to 20\n\n");
    for(i=0; i<10; i++)
    {
        printf("Table of %d =  ", n);
        for(j=1; j<=20; j++)
        {
            
            printf("%d   ", n*j);
        }
        printf("\n ");
        n++;
    }
    return 0;
}