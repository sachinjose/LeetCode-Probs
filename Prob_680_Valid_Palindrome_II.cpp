#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

bool helper(string s){
    int count = s.length();
    int i,j;

    for (i = 0,j=count-1; i < j; i++,j--){
        if(s[i]!= s[j]){
            return false;
        }
    }

    return true;
}

bool validPalindrome(string s) {

    int count = s.length();
    int st = 0;
    int e = count-1;

    if(helper(s)){
        return true;
    }

    while(st<e){

        if(s[st]!=s[e]){

            string temp = s.substr(0,e);
            temp.append(s.substr(e+1,count-1));
            if(helper(temp)){
              return true;
            }

            temp = s.substr(0,st);
            temp.append(s.substr(st+1,count-1));
            if(helper(temp)){
                return true;
            }

            else{
                return false;
            }

        }

        st++;
        e--;
    }
    
    return false;
}


int main(){

    string s = "tebbem";
    cout<<validPalindrome(s)<<endl;

    s = "abca";
    cout<<validPalindrome(s)<<endl;

    s = "aba";
    cout<<validPalindrome(s)<<endl;

    s = "bddb";
    cout<<validPalindrome(s)<<endl;

    s = "ebcbbececabbacecbbcbe";
    cout<<validPalindrome(s)<<endl;

    return 0;
}