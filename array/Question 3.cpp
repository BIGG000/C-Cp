#include<stdio.h>
#include <stdlib.h>
int main()
{
  int rows,cols,i,j;

  printf("Enter the number of rows of matrix\n");
  scanf("%d", &rows);
  printf("Enter the number of cols of matrix\n");
  scanf("%d", &cols);
  int arraynum1[rows][cols],arraynum2[rows][cols];
  printf("Enter elements of the matrix\n");
	
  for (i = 0; i < rows; i++)
  	{
    	for (j = 0; j< cols; j++)
    	{
      		scanf("%d", &arraynum1[i][j]);
		}	
	}
	 
	for (i = 0; i < rows; i++)
  	{
  
    	for (j = 0; j< cols; j++)
    	{	
       		arraynum2[j][i] = arraynum1[i][j];
		}
	}
	for (i = 0; i < rows; i++)
  	{
  
    	for (j = 0; j< cols; j++)
    	{	
       		if(arraynum1[i][j] != arraynum2[i][j])
       		{
       			printf("\nIts not a symmetric");
       			exit(0);
			}
		}
	}
	printf("\nIt is symmetric");
	
  
}
