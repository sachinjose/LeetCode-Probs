#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int mySqrt(int x) {
    if(x == 0){
        return x;
    }

    int s = 1;
    int e = x;
    int ans;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(mid > x/mid){
            e = mid - 1;
        }
        else if(mid < x/mid){
            ans = mid;
            s=mid+1;
        }
        else{
            return mid;
        }
    }
    return ans;
}

int main(){

    cout<<mySqrt_bs(8)<<endl;

    return 0;
}