#include<stdio.h>
int main()
{
	int num,a,b,c;
	printf("input number: ");
	scanf("%d",&num);
	c=printf("%d\n",num);
	a=num/(10*(c-1));
	b=num%10;
	printf("%d %d",a,b);
		if(num==0)
		{
			printf("number is zero");
    	}
	getch();
	return   0;	
}
