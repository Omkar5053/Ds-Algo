/*
Given an integer n, your task is to complete the function convertToRoman which prints the corresponding roman number of n. Various symbols and their values are given below.

I 1
V 5
X 10
L 50
C 100
D 500
M 1000
*/



#include <bits/stdc++.h>
using namespace std;

class Solution{
 public:
   string convertToRoman(int n) {
       unordered_map<int, string> m;
       m[1] = 'I';
       m[4] = "IV";
       m[9] = "IX";
       m[5] = 'V';
       m[10] = 'X';
       m[40] = "XL";
       m[50] = 'L';
       m[90] = "XC";
       m[100] = 'C';
       m[400] = "CD";
       m[500] = 'D';
       m[900] = "CM";
       m[1000] = 'M';
       
       int arr[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
       
       string res;
       
       for(int i=0; i<13; i++){
           if(arr[i] <= n){
               res += m[arr[i]];
               n -= arr[i];
               i--;
           }
       }
       return res; 
   }
};


int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
} 
