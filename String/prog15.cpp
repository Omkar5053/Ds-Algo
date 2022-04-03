//WAP to check whether one string is a rotation of another

#include <bits/stdc++.h>
using namespace std;

bool areRotations(string s1,string s2)
{
	return s1.length() == s2.length() && (s1+s2).find(s2);
}

int main()
{
	string s1 = "ball";
	string s2 = "lbal";
	
	if(areRotations(s1,s2))
		cout<<"True";
	else
		cout<<"False";
		
	return 0;
}
