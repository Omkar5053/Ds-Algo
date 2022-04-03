#include<stdio.h>
#define MAX_SIZE 1000

int main()
{
	int arr[MAX_SIZE],i,size,max,min;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	
	printf("Enter the elements of array....\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	min=arr[0];
	
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	
	printf("Minimum element of array is %d\n",min);
	printf("Maximum element of array is %d\n",max);
	
	return 0;
}
