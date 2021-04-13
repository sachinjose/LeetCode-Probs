#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseString(vector<char>& s) {
    for (int i = 0,j=s.size()-1; i < j; i++,j--){
    	swap(s[i],s[j]);
    }
}

int main(){

	vector<char> v;
	v.push_back('h');
	v.push_back('e');
	v.push_back('l');
	v.push_back('l');
	v.push_back('o');

	reverseString(v);

	for (int i = 0; i < v.size(); i++){
		cout<<v[i];
	}


	return 0;
}