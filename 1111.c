#include<stdio.h>
int main()
{
	int a=1;
	int sum=0;
	for(a=1;1;a++)
	{
		printf("%d",a);
		sum=sum+a;
		if(sum>=5)
		{
			printf("\n");
		}
	}
}
