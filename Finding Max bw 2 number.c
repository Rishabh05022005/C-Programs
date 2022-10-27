#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("Input number 1=");
	scanf("%d",&a);
	printf("Input number 2=");
	scanf("%d",&b);
	if(a>b)
	{
		printf("maximum=%d",a);
	}
	else
	{
		printf("maximum=%d",b);
	}
	
	return   0;
}
