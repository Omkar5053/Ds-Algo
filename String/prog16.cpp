//WAP to check whether a string is valid suffle of two strings or not


#include <bits/stdc++.h>
using namespace std;

bool isValidSuffle(string first,string second,string third)
{
	if(first.length() + second.length()!=third.length())
		return false;
		
		
	sort(first.begin(),first.end());
	sort(second.begin(),second.end());
	sort(third.begin(),third.end());
	
	int i,j,k;
	i = j = k =0;
	while(k<third.length())
	{
		if(i<first.length() && first[i] == third[k])
			i++;
		else if(j<second.length() && second[j] == third[k])
			j++;
		else
			return false;
		k++;
	}
	return i>=first.length() && i>=second.length();
}

int main()
{
	string s1 = "AB";
	string s2 = "XY";
	string s3 = "AXBY";
	
	if(isValidSuffle(s1,s2,s3))
		cout<<"True";
	else
		cout<<"False";
		
	return 0;
}
