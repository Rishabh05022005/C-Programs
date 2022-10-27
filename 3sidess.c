#include<stdio.h>
int main()
//proving triangle when 3 sides given
{
	int a,b,c;
	printf("enter the three sides");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c)
	{
		printf("posiible");
	}
	else
	{
		printf("not");
	}
	getch();
	
	
	return  0;
}

