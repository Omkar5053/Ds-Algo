#include<iostream>
#define MAX_SIZE 1000

using namespace std;
int main()
{
	int arr[MAX_SIZE],i,size,max,min;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	
	cout<<"Enter the elements of array...."<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
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
	
	cout<<"Minimum element of array is "<<min<<endl;
	cout<<"Maximum element of array is "<<max;
	
	return 0;
}
