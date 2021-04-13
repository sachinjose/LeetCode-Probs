#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string helper(string s1, string s2){
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i]){
			return s1.substr(0,i);
		}
	}
	return s1;
}


string longestCommonPrefix(vector<string>& strs) {
	if(strs.size() == 0){
		return "";
	}
	string lPrefix = strs[0];
	for (int i = 1; i < strs.size(); i++){
		lPrefix = helper(lPrefix,strs[i]);
	}
	return lPrefix;
}

int main(){

	vector<string> v;
	v.push_back("flower");
	v.push_back("flow");
	v.push_back("flight");

	cout<<longestCommonPrefix(v)<<endl;

	vector<string> s;
	s.push_back("dog");
	s.push_back("racecar");
	s.push_back("car");

	cout<<longestCommonPrefix(s)<<endl;

	return 0;
}