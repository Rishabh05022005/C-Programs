	#include<stdio.h>
int main()
{
	int len;
	
	printf("Input size: ");
	scanf("%d",&len);
	
	int array[len];
	int i=0;
	printf("\n input elements:-");
	
	for(i;i<len;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("\nOutput:- ");
	
	i=0;
	
	for(i=0;i<len;i++)
	{
		printf(" %d,"),array[i];
	}
	printf("\b");
	
	
	return  0;
	
}
