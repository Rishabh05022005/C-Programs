#include<stdio.h>
int main()
{
    int a,ori,rem;
    int sum=0;
    printf("enter the number: \n");
    scanf("%d",&a);
    ori=a;
    while(a!=0)
    {
       rem=a%10;
       sum=sum+(rem*rem*rem);
       a=a/10;

    }


    if(ori==sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not a armstrong number");
    }
    

    return  0;

}
