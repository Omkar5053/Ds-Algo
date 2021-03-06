//infix to postfix

#include<iostream>  
#include<stack>  
using namespace std;  

 
  
 
string convert(string);
int precedence(char);
bool eqlOrhigher(char,char);


bool IsOperator(char c)  
{  
	if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^' )
	{
		return true;
	}
	else
	{
		return false; 
	}  
} 

bool IsOperand(char c)  
{  
	if( c >= 'A' && c <= 'Z')
	{
	  	return true;  
	}
	if (c >= 'a' && c <= 'z')
	{
		return true;
	} 	  
	if(c >= '0' && c <= '9') 
	{
		return true;
	}
	else
	{
		return false;
	}  
}

bool eqlOrhigher (char op1, char op2)  
{  
	int p1 = precedence(op1);  
	int p2 = precedence(op2);  
	if (p1 == p2)  
	{  
		if (op1 == '^' )  
			return false;
		else  
			return true;  
	}
	else  
		return  (p1>p2 ? true : false);  
}


  
  
int main()  
{  
	string infix_expression, postfix_expression;  
		cout << " Enter an infix expression: ";  
		cin >> infix_expression;  
 		postfix_expression = convert(infix_expression);  
 		cout << "\nYour Infix expression is: "<< infix_expression;  
		cout << "\nPostfix expression is: "<< postfix_expression;  
	return 0;  
}  
    
int precedence(char op)  
{  
	if(op == '+' || op == '-')                    
		return 1;  
	if (op == '*' || op == '/')  
		return 2;  
	if(op == '^')                                  
		return 3;
	else       
		return 0; 
} 

string convert(string infix)  
{  
	stack <char> S;  
	string postfix ="";    
	char ch;  
	S.push( '(' );  
	infix += ')';  
  
	for(int i = 0; i<infix.length(); i++)  
	{  
		ch = infix[i];  
  
		if(ch == ' ')  
			continue;  
		else if(ch == '(')  
			S.push(ch);  
		else if(IsOperand(ch))  
			postfix += ch;  
		else if(IsOperator(ch))  
		{  
			while(!S.empty() && eqlOrhigher(S.top(), ch))  
			{  
				postfix += S.top();  
				S.pop();  
			}  
		S.push(ch);  
		}  
		else if(ch == ')')  
		{  
			while(!S.empty() && S.top() != '(')  
			{  
				postfix += S.top();  
				S.pop();  
			}  
		S.pop();  
		}  
	}	  
	return postfix;  
}  

