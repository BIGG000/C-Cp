#include<stdio.h>
int main()
{
	
	int arr[25],i,n,ser,count=0,temp,mod,sum=0,range,mean,median;
	int pos=0,neg=0,even=0,odd=0;
	printf("Enter the range of array: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the Value %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the value to search: ");
	scanf("%d",&ser);
	
	for(int j=0;j<=n;j++)
	{
		if(arr[j] == ser)
		{
			count++;
			mod=arr[j];
		}
		
	}
	printf("%d is the reprated time of : %d",ser,count);
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			pos++;
		}
		else
		{
			neg++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("Your positive number is : %d\n",pos);
	printf("Your negative number is : %d \n",neg);
	printf("Your Even number is : %d\n",even);
	printf("Your Odd number is : %d\n",odd);
	
	
	for(i=0; i<n-1; i++)
		{
				
			for(int j=0; j<(n-i-1); j++)
			{
				if (arr[j]>arr[j+1])			
				{	
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
					
					for(int k=0; k<n; k++)
						
					{
						printf("%d ",arr[k]);
					}
						printf("\n");
			
						printf("i = %d j = %d \n",i,j);
			
				}	
	
			}		
		}
		
			printf("\nSorted elements ");
				for(i=0; i<n; i++)
				{
					printf("%d  ",arr[i]);
				}
					printf("\n");
					
		for(i=0; i<=n; i++)
			{
				sum=sum+arr[i];
			}		
			mean=sum/n;
		for(i=1; i<n; i++)
		{
			median=arr[i/2];
		}

		printf("\nMean of the numbers is %d\n",mean);					
		
		printf("\nMedian of the numbers is %d\n",median);					
	
		printf("\nMode of the numbers is %d",mod);

}
