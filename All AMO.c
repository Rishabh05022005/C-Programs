#include<stdio.h>
int main()
{
	int a,b,sum,diff,pro,modu;
	float quot;
	printf("Enter Two Numbers=");
	scanf("%d%d",&a,&b);
	sum=a+b;
	diff=a-b;
	pro=a*b;
	quot=(float)a/b;
	modu=a%b;
	printf("Sum=%d \n Difference=%d \n Product=%d \n quotient=%d \n Modulus=%d",sum,diff,pro,quot,modu);
	getch();
}
