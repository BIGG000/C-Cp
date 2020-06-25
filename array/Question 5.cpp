#include<stdio.h>

int main()
{	
	int i,j,count;
	count=1;
	for (i=1; i<=5; i++) 
	{
		for(j=1; j<=5; j++) 
				{
				printf("%d ",count++);
				}
				printf("\n");
		count=count+4;
		for(j=1; j<=5; j++) 
				{
				printf("%d ",count--);
				}
				printf("\n");
		count=count+6;
				
	}
	
}
