#include<stdio.h>
int main()
{

	int rows,cols;
	printf("Enter range of rows: ");
	scanf("%d",&rows);
	printf("Enter range of cols: ");
	scanf("%d",&cols);
	int arraynum1[rows][cols], arraynum2[rows][cols];
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("Enter the value : ");
			scanf("%d",&arraynum1[i][j]);
		}
	}

	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			arraynum2[i][j] = arraynum1[j][i];
			
		}
	}
	printf("Your transpose value is: \n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%d\t",arraynum2[i][j]);
		}
		printf("\n");
	}
		
}
