#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int step(vector<int>& nums, int size) {
    if(size == 0){
        return 0;
    }
    int lastPos = size;
    int index = -1;
    for (int i = 0; i <size; i++){
        if(i+nums[i]>=lastPos){
            index = i;
            break;	
        }
    }
    return 1 + step(nums,index); 
}
int jump(vector<int>& nums) {
    return step(nums,nums.size()-1);
}

int main(){

	vector<int> nums;

	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(4);

	cout<<jump(nums)<<endl;

    return 0;
}