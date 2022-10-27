//Prime number
#include<stdio.h>
int main()
{
    int a;
    int i=2;
    printf("enter the number");
    scanf("%d",&a);
    for(i;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("prime");
        }
        else if(a%i!=0)
        {
            printf("composite");
            break;

        }
        else if(a<=21)
        {
           printf("0/1 input");
        }

    }
    getch();








   return   0;
}