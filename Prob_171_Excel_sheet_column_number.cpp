#include<iostream>
#include <cmath>

using namespace std;

int titleToNumber(string columnTitle) {
    int count = columnTitle.length();
    int exp = count-1;
    int ans = 0;

    for (int i = 0; i < count; i++){
    	ans += (pow(26,exp)*(columnTitle[i] - 'A' + 1));
    	exp--;
    }

    return ans;
}

int main(){

	string columnTitle = "A";
	cout<<titleToNumber(columnTitle)<<endl;

	columnTitle = "AB";
	cout<<titleToNumber(columnTitle)<<endl;

	columnTitle = "ZY";
	cout<<titleToNumber(columnTitle)<<endl;

	columnTitle = "FXSHRXW";
	cout<<titleToNumber(columnTitle)<<endl;

	return 0;


}