#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lengthOfLastWord(string s) {

	bool flag = false;
	int count = 0;

	for (int i = s.length()-1; i >= 0; i--){
			if(s[i]==' '){
			 	if(flag == true){
					return count;
			 	}
			}
			else{
				flag = true;
				count++;
			}
	}	

    return count;
}

int main(){

	string s = "b a  ";
	cout<<lengthOfLastWord(s)<<endl;

	return 0;
}