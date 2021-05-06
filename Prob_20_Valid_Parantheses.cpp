#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

bool isValid(string s){
	int len = s.size();
	stack<char> st;

	for (int i = 0; i < len; i++){
		if((s[i] == '(') || (s[i] == '{')||(s[i] =='[')){
			st.push(s[i]);
		}
		if(s[i] == ')'){
			if(st.size() == 0){
				return false;
			}
			if(st.top() == '('){
				st.pop();
			}
            else{
                return false;
            }
		}
		if(s[i]=='}'){
			if(st.size() == 0){
				return false;
			}
			if(st.top() == '{'){
				st.pop();
			}
            else{
                return false;
            }
		}
		if(s[i] == ']'){
			if(st.size() == 0){
				return false;
			}
			if(st.top() == '['){
				st.pop();
			}
            else{
                return false;
            }
		}
	}
	if(st.size()!=0){
		return false;
	}
	return true;
}

int main(){

	string s = "()";

	cout<<isValid(s)<<endl;

	s = "()[]{}";
	cout<<isValid(s)<<endl;

	s = "(]";
	cout<<isValid(s)<<endl;

	s = "([)]";
	cout<<isValid(s)<<endl;

	s = "{[]}";
	cout<<isValid(s)<<endl;

	return 0;
}