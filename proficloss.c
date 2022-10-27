//C program to calculate profit or loss
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("input the cp AND sp");
	scanf("%d%d",&a,&b);
	c=b-a;
	if(c>0)
	{
		printf("profit:%d",c);
	}
	if(c<0)
	{
		c=-1*c;
		printf("loss:%d",c);
	}
	getch();
	
	return  0;
}
