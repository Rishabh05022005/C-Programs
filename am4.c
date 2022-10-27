//C program to count even and odd elements in array
#include<stdio.h>
int main()
{
	int len;
	
	printf("Input size:- ");
	scanf("%d",&len);
	
	int array[len],i=0;
	
	printf("\n Input elemets:- ");
	
	for(i=0;i<len;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("\n even:- ");
	
	for(i=0;i<len;i++)
	{
		if(array[i]%2==0)
		{
			printf("%d,",array[i]);
		}
	}
	printf("\b\n");
	
	printf("odd:-");4
	
	for(i=0;i<len;i++)
	{
		if(array[i]%2!=0)
		{
			printf("%d,",array[i]);
		}
	}
	printf("\b\n");
	
}
