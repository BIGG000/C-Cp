#include<stdio.h>
int main()
{
	int i,j,k,a=92;   //ascii code 92=\
	
	for(i=0; i<1; i++)
	{
		printf("+");
			
			for(j=0; j<4; j++)
				{
					printf("/%c",a);
				}
			printf("+\n");
			
			for(k=0; k<2; k++)
				{
					printf("||\n");
				}
		printf("+");
			
			for(k=0; k<4; k++)
				{
					printf("/%c",a);
				}
			printf("+\n");
		}
}
