#include<stdio.h>
//C program to check whether triangle is equilateral, scalene or isosceles
int main()
{
	int a,b,c;
	printf("enter the three sides of a trianlge");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c && c==a && a+b>c)
	{
		printf("equilateral");
	}
	else if(a==b || b==c || c==a && a+b>c)
	{
		printf("isoceles");
	}
	else if(a!=b!=c && a+b>c)
	{
		printf("scalar");
	}
	else
	{
		printf("traingle not possible");
	}
	getch();
	
	return   0;
}

