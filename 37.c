#include<stdio.h>
int main()
{
    int cols;
    int i=1;
    int j=1;
    printf("input the value of n");
    scanf("%d",&cols);
    for(i=1;i<=cols;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);

        }
        for(j=i-1;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}