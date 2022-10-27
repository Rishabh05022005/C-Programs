#include<stdio.h>
int main()
{

	int a;
	printf("enten the number:");
	scanf("%d",&a);
	if(a%5==0)
	{
		printf("divisible by 5");
	}
	else if(a&11==0)
	{
		printf("by11");
		
	}
	else
	{
		printf("not by any");
	}
	
	return   0;
	
	
}

