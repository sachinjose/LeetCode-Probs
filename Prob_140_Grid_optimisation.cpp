#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int uniquePaths_2(int m, int n) {
    long long ans = 1;
    for(int i = n; i <= n + m - 2; i++){
        ans = ans * i;
        ans = ans/(i-n+1);
    }
    return (int)ans;
}

int uniquePaths(int m, int n) {
    if(m == 1 || n == 1){
        return 1;
    }
    int temp[m][n];
    temp[0][0] = 0;
    temp[0][1] = 1;
    temp[1][0] = 1;
    for(int i=0;i<m; i++){
        temp[i][0] = 1;
    }
    for(int i=0;i<n; i++){
        temp[0][i] = 1;
    }
    for(int i = 1; i < m; i++ ){
        for(int j = 1; j < n; j++){
            temp[i][j] = temp[i-1][j] + temp[i][j-1]; 
         }
        cout<<endl;
    }
    return temp[m-1][n-1];
}

int main(){

	cout<<uniquePaths(7,3)<<endl;

    return 0;
}