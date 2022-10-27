#include<stdio.h>

int main()
{
	int i,j,rows,cols;
	printf("enter the number of rows");
	scanf("%d",&rows);
	printf("enter the number of cols");
	scanf("%d",&cols);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=cols;j++)
		{
			if(cols>=2 && cols<=cols-1 && rows>=2 && rows<=rows-1)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
