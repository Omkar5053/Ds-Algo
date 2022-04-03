//reversing string

#include<iostream>
#define MAX_SIZE 100
using namespace std;

int main()
{
	char A[MAX_SIZE] = "Omkar Singh";
	char res[MAX_SIZE];
	int i,j;
	for(i=0;A[i]!='\0';i++)
	{
	}
	i=i-1;
	for(j=0;i>=0;i--,j++)
	{
		res[j] = A[i];
	}
	res[j] = '\0';
	cout<<" Reversed Result "<<res;
	return 0;
}
