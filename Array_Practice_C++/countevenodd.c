/**
 * C program to count total number of even and odd elements in an array
 */

#include<iostream>
#define MAX_VALUE 1000

using namespace std;
int main()
{
	int arr[MAX_VALUE],i,countEven=0,countOdd=0,size;
	
	cout<<"Enter the size of an Array: "<<endl;
	cin>>size;
	
	cout<<"Enter the elements in array..."<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			countEven++;
		}
		else
		{
			countOdd++;	
		}
	}
	
	cout<<"	The total numbers of even numbers in Array = "<<coutEven;
	cout<<"The total numbers of odd numbers in arrays = "<<countOdd;
	
	return 0;
}
