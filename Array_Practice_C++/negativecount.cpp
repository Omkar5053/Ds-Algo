/**
 * C program to count total number of negative elements in array
 */
 
 #include<iostream>
 #define MAX_VALUE 1000
 
 using namespace std;
 int main()
 {
 	int arr[MAX_VALUE],i,size,count=0;
 	
 	cout<<"Enter the size of array: ";
 	cin>>size;
 	
 	cout<<"Enter the elements in Arrays--"<<endl;
 	for(i=0;i<size;i++)
 	{
 		cin>>arr[i];	
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]<0)
		{
			count++;
		}
	}
	cout<<"The total numbers of negative elements are "<<count;
	return 0;
 }
