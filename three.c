#include <stdio.h>
 
int main()
{
    int a; int b=1; int sum=0;
    printf("enter the n");
    scanf("%d",&a);
    for(b;b<=a;b++)
    {
    	printf("%d\n",b);
    	sum=sum+b;
	}
	printf("%d",sum);
	
	return  0;
}
