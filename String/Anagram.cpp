//check for Anagram 
#include<stdio.h>

int main()
{
	char A[] = "decimal";
	char B[] = "medical";
	int i,H[26] = {0};
	
	for(i=0;A[i]!='\0';i++)
	{
		H[A[i] - 97] += 1;
	}
	for(i=0;B[i]!='\0';i++)
	{
		H[A[i] - 97] -= 1;
	}
	if(B[i]=='\0')
	{
		for(i=0;i<26;i++)
		{
			if(H[i] < 0)
			{
				printf("Not Anagram !!");
				break;
			}
		}
		printf("It is Anagram");
	}
		
}
