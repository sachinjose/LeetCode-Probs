#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int helper_2(string text1, int i,string text2,int j){
    if(i==text1.size() || j ==text2.size()){
        return 0;
    }
    if(text1[i] == text2[j]){
        return 1 + helper(text1,i+1,text2,j+1);
    }
    else{
        return max(helper(text1,i,text2,j+1),helper(text1,i+1,text2,j));
    }
}

int longestCommonSubsequence(string text1,string text2){
    int m = text1.size();
    int n = text2.size();
    int temp[m+1][n+1];

    for (int i = 0; i <= m; i++){
        for (int j = 0; j <= n; j++){
            if(i == 0 || j == 0){
                temp[i][j] = 0;
            }
            else if(text1[i-1] == text2[j-1]){
                temp[i][j] = 1 + temp[i-1][j-1];
            }
            else{
                temp[i][j] = max(temp[i][j-1],temp[i-1][j]);
            }
        }
    }

    return temp[m][n];
}


int longestCommonSubsequence(string text1, string text2) {
    return helper(text1,0,text2,0);
}

int main(){

    return 0;
}