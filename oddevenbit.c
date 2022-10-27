#include<stdio.h>
//C program to check even or odd using bitwise
int main()
{
    int a,res;
    printf("enter the number:");
    scanf("%d",&a);
    res=a&1;
    if(res==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }



    return  0;

}
