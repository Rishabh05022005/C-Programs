#include<stdio.h>
int main()
{
	int n; int a=1;
	printf("enter the value of n limit");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("%d\n",a);
		a++;
	}
	getch();
	
	return   0;
}
