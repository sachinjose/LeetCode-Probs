#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

bool canJump_2(vector<int>& nums) {
    int lastPos = nums.size() - 1;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (i + nums[i] >= lastPos) {
            lastPos = i;
        }
    }
    return lastPos == 0;
}

// bool helper(vector<int>& nums, int index, vector<int>& dynamic){
// 	if((nums.size()==0) || (nums.size() == 1)){
// 		return true;
// 	}
// 	if(index >= nums.size()){
// 		return false;
// 	}
// 	if(index == nums.size()-1){
// 		return true;
// 	}
// 	for (int i = 1; i <= nums[index]; i++){
//         if(dynamic[index+i]==0){
//             if(helper(nums,index+i,dynamic)==true){
//                 return true;
//             }
//             else{
//                 dynamic[index+i] = 1;
//             }
//         }
// 	}
// 	return false;
// }

// bool canJump(vector<int>& nums){
// 	vector<int> dynamic(nums.size(),0);
// 	cout<<dynamic.size()<<" "<<nums.size()<<endl;
//     return helper(nums,0,dynamic);
// }

int main(){

	vector<int> nums;

	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(4);

	cout<<canJump(nums)<<endl;

	vector<int> num;

	num.push_back(2);
	num.push_back(3);
	num.push_back(1);
	num.push_back(1);
	num.push_back(4);

	cout<<canJump(num)<<endl;

	vector<int> nu;

	nu.push_back(2);
	nu.push_back(0);
	cout<<canJump(nu)<<endl;

    return 0;
}