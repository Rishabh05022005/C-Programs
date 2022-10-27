#include<stdio.h>

int main()
{
	int rows,cols,i,j;
	printf("enter the number of rows");
	scanf("%d",&rows);
	printf("enter the number of cols");
	scanf("%d",&cols);
	for(i=1;i<=rows;i++)
	{
		for(j=0;j<=cols;j++)
		{
			printf("%d",j%2);
		}
		
		printf("\n");
	}
}
