#include<stdio.h>
int main()
{
    int rows;
    int i=1;
    int j=1;
    scanf("%d",&rows);
     for(i=1;i<=rows;i++)
     {
        for(j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
     }



     return  0;
}
