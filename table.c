#include<stdio.h>
int main()
{
	int num;
	int a=1;
	int b;
	printf("Input num: ");
	scanf("%d",&num);
	for(a;a<=num;a++)
	{
		b=num*a;
		printf("%d\*%d=%d\n",num,a,b);
		
	}
	getch();
	
	
	return  0;
	
}
