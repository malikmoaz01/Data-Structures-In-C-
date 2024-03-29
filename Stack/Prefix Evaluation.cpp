#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int prefixEvaluation(string s)
{
	stack<int> st;
	for(int  i = s.length() - 1; i >= 0;   i--)
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			st.push(s[i] - '0');
		}
		else
		{
			int operator1 = st.top();
			st.pop();
			int operator2 = st.top();
			st.pop();
			switch(s[i])
			{
				case '+':
					st.push(operator1 + operator2);
					break;
				case '-':
					st.push(operator1 - operator2);
					break;	
				case '*':
					st.push(operator1 * operator2);
					break;
				case '/':
					st.push(operator1 / operator2);
					break;
				case '^':
				    st.push(pow(operator1,operator2));
					break;
			}
		}
	}
	return st.top();
}
int main()
{
	string s = "-+7*45+20";
	cout<<prefixEvaluation(s);
	return 0;
	
}