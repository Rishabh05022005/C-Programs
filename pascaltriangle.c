#include<stdio.h>
#include<math.h>
int main()
{
    int rows;
    int i=1;
    int j=1;
    printf("input rows ");
    scanf("%d",&rows);
    for(i;i<=rows;i++)
    {
       
        for(j;j<=11*i;j*11)
        {
            printf("%d",j);
            
        }
        printf("\n");
    }



    return  0;

}