#include<stdio.h>
int main()
//checking if triangle is possible by given three angles
{
	int first,second,third;
	printf("enter three angles\n");
	scanf("%d%d%d",&first,&second,&third);
	if(first+second+third==180)
	{
		printf("triangle is posiible");
	}
	else
	{
		printf("triangle not possible");
	}
	getch();
	
	return   0;
}
