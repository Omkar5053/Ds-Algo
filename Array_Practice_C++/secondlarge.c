/**
 * C program to find second largest number in an array
 */
 #include<stdio.h>
 #include<limits.h>
 #define MAX_VALUE 1000
 
 int main()
 {
 	int arr[MAX_VALUE],i,size;
 	int max1,max2;
 	
 	printf("Enter the size of array: \n");
 	scanf("%d",&size);
 	
 	printf("Enter the value in arrays---\n");
 	for(i=0;i<size;i++)
 	{
 		scanf("%d",&arr[i]);	
	}
	max1=max2=INT_MIN;
	for(i=0;i<size;i++)
	{
		if(arr[i]>max1)
		{
			max2=max1;
			max1=arr[i];
		}
		else if(arr[i]>max1 && arr[i]<max2)
		{
			max2=arr[i];
		}
	}
	printf("The first largest number is %d\n",max1);
	printf("The second largest number is %d",max2);
	return 0;
	
 }
