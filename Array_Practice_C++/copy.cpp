/**
 * C program to copy one array to another array
 */
 
#include <iostream>
#define MAX_SIZE 1000

using namespace std;
int main()
{
    int arr[MAX_SIZE], temp[MAX_SIZE],i,size;
   
   
    cout<<"Enter the size of the array : "<<endl;
    cin>>size;
    
    cout<<"Enter elements of source array : "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

  
    for(i=0; i<size; i++)
    {
        temp[i] = arr[i];
    }

    cout<<endl<<"Elements of source array are : ";
    for(i=0; i<size; i++)
    {
        cout<<"   "<<arr[i];
    }


    cout<<endl<<"Elements of dest array are : ";
    for(i=0; i<size; i++)
    {
        cout<<"  "<<temp[i];
    }

    return 0;
}
