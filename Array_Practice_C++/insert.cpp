/**
 * C program to insert an element in array at specified position
 */
 #include<iostream>
 #define MAX_VALUE 1000
 
 using namespace std;
 int main()
 {
 	int arr[MAX_VALUE],i,size,num,pos;
 	cout<<"Enter the size of Array: "<<endl;
 	cin>>size;
 	
 	cout<<"Enter the elements in Array--"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter element to insert-- ";
	cin>>num;
	cout<<"Enter the element position to insert: ";
	cin>>pos;
	
	if(pos<=0 || pos>size+1)
	{
		cout<<"Invalid Index plz enter valid index";
	}
	else
	{
		for(i=size;i>=pos;i--)
		{
			arr[i]=arr[i-1];
		}
		arr[pos-1]=num;
		size++;
		cout<<"New Array after insertion is----"<<endl;
		for(i=0;i<size;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
	
	return 0;
 }
