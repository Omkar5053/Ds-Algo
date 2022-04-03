/*
Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below.
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


class Solution {
  public:
    int romanToDecimal(string &str) {
            int ans=0;
        map<char,int>st;
        st.insert({'I',1});
        st.insert({'V',5});
        st.insert({'X',10 });
        st.insert({'L',50});
        st.insert({'C',100});
        st.insert({'D',500});
        st.insert({'M',1000});
        for(int i=0;i<str.length();i++){
            if(st[str[i]]<st[str[i+1]]){
                ans+=st[str[i+1]]-st[str[i]];
                i++;
                continue;
            }
            ans+=st[str[i]];
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  
