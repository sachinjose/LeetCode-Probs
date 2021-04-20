#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

int lsize(string s, int top){
	bool flag = true;
	int ans = 0;
	for (int i = top; i >= 0; i--){
		if(s[i]!=s[top]){
			return ans;
		}
		ans++;
	}
	return ans;
}

bool helper(string s,int j,int k){
	int loop_var = j;
	for (int i = 0; i < k; i++){
		if(s[loop_var]!=s[j]){
			return false;
		}
		loop_var++;
	}
	return true;
}

string removeDuplicates(string S, int k) {
	int count = S.length();
	string s = "";
	int top = 0;
	int i=0;
	while(i<count){

		if(s.length() > 0){

			 top = s.length()-1;

			if(s[top] != S[i]){
				s.append(1,S[i]);
				i++;
				top++;
			}

			if(s[top] == S[i]){

				int l = lsize(s,top);
				bool flag = helper(S,i,k-l);

				if(flag == true){

					for (int j = 0; j < l; j++){
						s.pop_back();
					}

					i += (k-l);

				}
				else{
					s.append(1,S[i]);
					i++;
					top++;
				}

			}

		}

		else{
			s.append(1,S[i]);
			i++;
			top++;
		}

	}

	return s;
}

string removeDuplicates(string s, int k) {
    stack<int> counts;
    for (int i = 0; i < s.size(); ++i) {
        if (i == 0 || s[i] != s[i - 1]) {
            counts.push(1);
        } else if (++counts.top() == k) {
            counts.pop();
            s.erase(i - k + 1, k);
            i = i - k;
        }
    }
    return s;
}



int main(){

	string s = "deeedb";
	s = "deeedbbcccbdaa";

	cout<<removeDuplicates(s,3)<<endl;

	s = "pbbcggttciiippooaais";
	cout<<removeDuplicates(s,2)<<endl;

	s = "abcd";
	cout<<removeDuplicates(s,2)<<endl;

	return 0;
}