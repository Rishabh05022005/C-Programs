#include<stdio.h>
int main()
{
	int len,sum=0;
	
	printf("Input size:- ");
	scanf("%d",&len);
	
	int array[len],i=0;
	
	printf("\n Input elemets:- ");
	
	for(i=0;i<len;i++)
	{
		scanf("%d",&array[i]);
		sum=sum+array[i];
	}
	
	printf("\n sum:- ");
	
		printf("%d",sum);
		
		
	return  0;	
}

