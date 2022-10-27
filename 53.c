//Half diamond number pattern program in C – 3
#include<stdio.h>
int main()
{
    int cols;
    int i=1;
    int j=1;
    scanf("%d",&cols);
    d

    printf("*\n");

    for(i=1;i<=cols;i++)
    {
        printf("*");
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=i-1;j>0;j--)
        {
            printf("%d",j);
        }
        printf("*");

        printf("\n");
    }

    for(i=cols-1;i>=1;i--)
    {
        printf("*");
        for(j=1;j<=i;j++)
        {
            printf("%d",j);

        }
        for(j=i-1;j>0;j--)
        {
            printf("%d",j);
        }
        printf("*");

        printf("\n");
    }
    printf("*");




    return  0;

    
    
}