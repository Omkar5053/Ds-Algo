#include<iostream>
#define MAX_SIZE 100


using namespace std;

int menu()
{
    int choice;
    cout<<endl<<"1. Choose to Add the element -- Push()";
    cout<<endl<<"2. Choose to delete the element -- Pop()";
    cout<<endl<<"3. Exit";
    cout<<endl<<endl<<"Enter your choice "<<endl;
    cin>>choice;
    return choice;
}

int main()
{
    int arr[MAX_SIZE];
	int size,top,num,i;
	
	top=-1;

    while(1)
    {
        switch(menu())
        {
        case 1:
            cout<<"Enter the size of array.. ";
			cin>>size;
	
			cout<<"Enter the element to insert into stack :(push) :  ";
			cin>>num;
			//push operation
			if(top == size-1)
			{
				cout<<"Stack is full so unable to push "<<num<<endl;
			}
			else
			{
				top++;
				arr[top]=num;
			}
			
			cout<<"Array after insertion..."<<endl;
			for(i=0;i<=top;i++)
			{
				cout<<"  "<<arr[i];
			}
			
			
            break;
            
        case 2:
			if(top == -1)
			{
				cout<<"Sorry, Stack is Empty ... ";
			}
			else
			{
				cout<<"The deleted element is : "<<arr[top]<<endl;
				top-=1;
			}
			
			cout<<"Array after deletion..."<<endl;
			for(i=0;i<=top;i++)
			{
				cout<<"  "<<arr[i];
			}
            break;
        case 3:
            return 0;
        default:
            cout<<"Invalid choice Plz Enter valid choice....";
        }
      
    }
    
    return 0;
}

