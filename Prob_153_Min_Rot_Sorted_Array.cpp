#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int findMin(vector<int>& nums) {
    
    int s = 0;
    int e = nums.size() - 1;
    int mid = (s+e)/2;

    while(s<=e){

        mid = s + (e-s)/2;

        if(nums[mid] > nums[mid+1]){
            return nums[mid + 1];
        }

        if(nums[mid]>=nums[s]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

    }


    return nums[mid];
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

    vector<int> nm;
    nm.push_back(3);
    nm.push_back(4);
    nm.push_back(5);
    nm.push_back(1);
    nm.push_back(2);

    cout<<findMin(nm)<<endl;

    vector<int> n;
    n.push_back(11);
    n.push_back(13);
    n.push_back(15);
    n.push_back(17);

    cout<<findMin(n)<<endl;

    return 0;
}