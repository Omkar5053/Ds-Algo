//Bubble Sorting program



#include<iostream>
#define MAX_SIZE 100

using namespace std;

int main()
{
	int arr[MAX_SIZE];
	int i,size,j;
	
	cout<<"Enter the size of the Array...."<<endl;
	cin>>size;
	
	cout<<"Enter the elements of the Array :"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	for(j=1;j<size;j++)
	{
		for(i=0;i<size;i++)
		{
			if(arr[i]>arr[i+1])
			{
				arr[i]=arr[i]+arr[i+1];
				arr[i+1]=arr[i]-arr[i+1];
				arr[i]=arr[i]-arr[i+1];
			}
		}
	}
	
	
	
	
	cout<<"Bubble Sorted Array are---- "<<endl;
	for(i=0;i<size;i++)
	{
		cout<<"  "<<arr[i];
	}
	
	
	return 0;
	
}

