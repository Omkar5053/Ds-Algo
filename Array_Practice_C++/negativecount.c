/**
 * C program to count total number of negative elements in array
 */
 
 #include<stdio.h>
 #define MAX_VALUE 1000
 
 int main()
 {
 	int arr[MAX_VALUE],i,size,count=0;
 	
 	printf("Enter the size of array: ");
 	scanf("%d",&size);
 	
 	printf("Enter the elements in Arrays--\n");
 	for(i=0;i<size;i++)
 	{
 		scanf("%d",&arr[i]);	
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]<0)
		{
			count++;
		}
	}
	printf("The total numbers of negative elements are %d",count);
	return 0;
 }
