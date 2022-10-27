#include<stdio.h>
int main()
{
	int n; int m=1;
	printf("enter the value of n: ");
	scanf("%d",&n);
	while(m<=n)
	{
		if(m%2==0)
		{
			printf("%1d,",m);
		}
		m++;
	}
	getch();
	
	
	return  0;
}
