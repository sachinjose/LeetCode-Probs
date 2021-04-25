#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

string reverseWords(string s) {
	vector<string> temp(s.size(),"");
	int index = 0;
	string s2;

	for (int i = 0; i < s.size(); i++){
		if(s[i] != ' '){
			temp[index] += s[i];
		}
		if(s[i]==' '){
			if((temp[index]!="")){
				index++;
			}
		}
	}	

	for (int i = temp.size()-1; i >= 0; i--){
		if(temp[i]!=""){
			s2+=temp[i];
			if(i!=0){
				s2+=' ';
			}
		}
	}
	return s2;
}


int main(){

	string s = "the sky is blue";
	cout<<reverseWords(s)<<endl;

	s = "  hello world  ";
	cout<<reverseWords(s)<<endl;

	s = "a good   example";
	cout<<reverseWords(s)<<endl;

	s = "  Bob    Loves  Alice   ";
	cout<<reverseWords(s)<<endl;

	s = "Alice does not even like bob";
	cout<<reverseWords(s)<<endl;

    return 0;
}