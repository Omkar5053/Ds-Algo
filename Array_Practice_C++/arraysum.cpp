/**
 * C program to find sum of all elements of array 
 */
#include <iostream>
#define MAX_SIZE 1000

using namespace std;
int main()
{
	int arr[MAX_SIZE];
	int i,n,sum=0;
	
	cout<<"Enter the size of an array..."<<endl;
	cin>>n;
	
	cout<<"Enter the elements of an array..."<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"Sum of total array is = "<<sum;
	return 0;
}
