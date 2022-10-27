#include<stdio.h>
int main()
{
	int sum=0;
	int n;
	int a=1;
	printf("enter the value of n: ");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		sum=sum+a;
	}
printf("%d",sum);


return  0;
}
