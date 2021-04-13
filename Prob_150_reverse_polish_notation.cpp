#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<string> s;
	for (int i = 0; i < tokens.size(); i++){
		if(tokens[i] == "+" || tokens[i] == "-" || tokens[i]=="/" || tokens[i]=="*"){
			int ans = 0;

			string s6 = s.top();
			int op1 = atoi(s6.c_str());
			s.pop();

			s6 = s.top();			
			int op2 = atoi(s6.c_str());
			s.pop();

			if(tokens[i] == "+"){
				ans = op1 + op2;
			}

			if(tokens[i] == "-"){
				ans = op2 - op1;
			}

			if(tokens[i] == "/"){
				ans = op2 / op1;
			}

			if(tokens[i] == "*"){
				ans = op1 * op2;
			}

			cout<<ans<<" ";

			s.push(to_string(ans));
		}
		else{
			s.push(tokens[i]);
		}
	}

	string s6 = s.top();
	return atoi(s6.c_str());
}

int main(){

	vector<string> tokens;
	tokens.push_back("4");
	tokens.push_back("13");
	tokens.push_back("5");
	tokens.push_back("/");
	tokens.push_back("+");

	cout<<evalRPN(tokens);

	return 0;
}