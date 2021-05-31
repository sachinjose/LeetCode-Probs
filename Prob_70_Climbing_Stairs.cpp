#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int climbStairs(int n) {
    int dp[n+1];
    for(int i=0; i<=n; i++){
        if(i<3){
            dp[i] = i;
        }
        else{
            dp[i] = dp[i-1]+dp[i-2];
        }
    }
    return dp[n];
}

int main(){

	cout<<climbStairs(5)<<endl;
	
    return 0;
}