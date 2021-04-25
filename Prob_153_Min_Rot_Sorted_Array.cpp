#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int findMin(vector<int>& nums) {
    int s = 0;
    int e = nums.size() - 1;
    if((e == 0) || (nums[0] < nums[e])){
        return nums[0];
    }

    while(s<=e){

        int mid = s + (e-s)/2;

        if(nums[mid] > nums[mid+1]){
            return nums[mid + 1];
        }

        if(nums[mid - 1] > nums[mid]){
            return nums[mid];
        }


        if(nums[s] < nums[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

    }
    return -1;
}   


int main(){

    vector<int> num;
    num.push_back(4);
    num.push_back(5);
    num.push_back(6);
    num.push_back(7);
    num.push_back(0);
    num.push_back(1);
    num.push_back(2);

    cout<<findMin(num)<<endl;

    return 0;
}