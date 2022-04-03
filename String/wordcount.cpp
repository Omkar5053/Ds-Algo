//counting words
#include<iostream>
using namespace std;

int main()
{
	char A[] = "Hello Good Morning Everyone";
	int i,word = 1;
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i] == ' ' && A[i-1] != ' ')
		{
			word ++;
		}
	}
	
	cout<<" Total words are "<<word;
	return 0;
}
