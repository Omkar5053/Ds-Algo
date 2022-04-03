//finding duplicates in a String

#include<stdio.h>

int main()
{
	char A[] = "find duplicates";
	int H[26]={0};
	int i;
	for(i=0;A[i]!='\0';i++)
	{
		H[A[i]-97]+=1;
	}
	for(i=0;i<26;i++)
	{
		if(H[i]>1)
		{
			printf("\n%c",i+97); //it will print the duplicate character
			printf("\n%d",H[i]); //it will print the no of repeatation of that character
		}
	}
	
	return 0;
}
