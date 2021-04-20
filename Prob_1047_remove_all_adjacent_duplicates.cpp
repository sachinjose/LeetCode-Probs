#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

string removeDuplicates(string S) {
	int count = S.length();
	string s = "";
	int top = 0;
	for (int i = 0; i < count; i++){
		if(s.length() > 0){
			top = s.length()-1;
			if(s[top] != S[i]){
				s.append(1,S[i]);
			}
			if(s[top] == S[i]){
				s.pop_back();
			}
		}
		else{
			s.append(1,S[i]);
		}

	}
	return s;
}

int main(){

	string s = "abbaca";
	cout<<removeDuplicates(s)<<endl;

	return 0;
}