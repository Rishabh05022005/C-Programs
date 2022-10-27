#include<stdio.h>
int main()
{
    int cols;   
    int i;
    int j;
    scanf("%d",&cols);
        for(i=1;i<=cols;i++)
         {
                   for(j=1;j<=i; j++)
                   {
                       printf("%d",j);
                       
                   }
           printf("\n");
        }   

        for(i=cols-1;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }

            printf("\n");
        }
   

    return  0;

}