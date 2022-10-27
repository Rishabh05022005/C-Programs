#include<stdio.h>
int main()
{
	int i,j,rows,cols;
	rows=4;
	cols=4;
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
