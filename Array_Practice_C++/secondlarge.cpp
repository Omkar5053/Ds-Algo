/**
 * C program to find second largest number in an array
 */
 #include<iostream>
 #include<limits.h>
 #define MAX_VALUE 1000
 
 using namespace std;
 int main()
 {
 	int arr[MAX_VALUE],i,size;
 	int max1,max2;
 	
 	cout<<"Enter the size of array: "<<endl;
 	cin>>size;
 	
 	cout<<"Enter the value in arrays---"<<endl;
 	for(i=0;i<size;i++)
 	{
 		cin>>arr[i];	
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
	cout<<"The first largest number is "<<max1<<endl;
	cout<<"The second largest number is "<<max2;
	return 0;
	
 }
