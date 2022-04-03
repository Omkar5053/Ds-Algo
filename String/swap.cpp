//Swap two strings by using call by reference only aloow in C++

#include<iostream>
#include<string>
using namespace std;

void swap(string &s1,string &s2)
{
	string temp;
	temp  = s1;
	s1 = s2;
	s2 = temp;
}

int main()
{
	string s1 = "Omkar";
	string s2 = "Singh";
	swap(s1,s2);
	cout<<"s1 : "<<s1<<endl<<"s2 : "<<s2;
	return 0;
}
