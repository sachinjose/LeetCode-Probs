#include<iostream>
#include<vector>

using namespace std;

bool isPalindrome(string s) {

    int count = s.length();
    int st = 0;
    int e = count-1;

    while(st<e){

    	while((st<e)&&(!isalnum(s[st]))){
    		st++;
    	}

    	while((st<e)&&(!isalnum(s[e]))){
    		e--;
    	}

    	if(toupper(s[st])!=toupper(s[e])){
    		return false;
    	}

    	st++;
    	e--;
    }

    return true;
}

int main(){

	string s = "A man, a plan, a canal: Panama";
	cout<<isPalindrome(s)<<endl;

	s = "malayalam";
	cout<<isPalindrome(s)<<endl;

	s = "race a car";
	cout<<isPalindrome(s)<<endl;

	return 0;
}