#include<stdio.h>
int main()
{
	int amount,remainder,a;
	printf("enter the amount");
	scanf("%d",&amount);
	if(amount>=500)
	{
		a=amount/500;
		remainder=amount%500;
		printf("500:%d\n",a);
	}
	 if(remainder>=100)
	{
		a=remainder/100;
		remainder=remainder%100;
		printf("100:%d\n",a);
	}
	if(remainder>=50)
	{
		a=remainder/50;
		remainder=remainder%50;
		printf("50:%d\n",a);
		break;
	}
	if(remainder>=20)
	{
		a=remainder/20;
		remainder=remainder%20;
		printf("20:%d\n",a);
	}
	else if(remainder>=10)
	{
		a=remainder/10;
		remainder=remainder%10;
		printf("10:%d\n",a);
	}
	if(remainder>=5)
	{
		a=remainder/5;
		remainder=remainder%5;
		printf("5:%d\n",a);
	}
	if(remainder>=2)
	{
		a=remainder/2;
		remainder=remainder%2;
		printf("2:%d\n",a);
	}
   if(remainder>=1)
	{
		a=remainder/1;
		remainder=remainder%1;
		printf("1:%d\n",a);
	}
	getch();
	
	return  0;
	
	
	
}
