#include<stdio.h>
int main()
{
	int a,b;
	printf("enter first number:");
	printf("enter second number:");
	scanf("%d%d",&a,&b);
	if(a^b==0 || a^b==1)
	{
		printf("both inputs are same");
	}
	else
	{
		a=b;
		b=a;
	}
	printf("1st number is %d and 2nd is %d",a,b);
	getch();
	
	return  0;
	
}
