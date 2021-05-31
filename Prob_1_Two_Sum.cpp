#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int helper(vector<int>& nums, int s, int target){
	int e = nums.size() - 1;
	while(s <= e){
		int mid = s + (e-s)/2;
		if (nums[mid]==target){
			return mid;
		}
		if(nums[mid] > target){
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	return -1;
}

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> v(2,-1);
	if(nums.size()==0){
		return v;
	}

	for (int i = 0; i < nums.size(); ++i){
		int candidate = target - nums[i];
		int flag = helper(nums, i+1 ,candidate);
		if(flag != -1){
			v[0] = i;
			v[1] = flag;
			break;
		}
	}
    v[0]+=1;
    v[1]+=1;
	return v;

}


int main(){

	vector<int> v;
	v.push_back(2);
	v.push_back(7);
	v.push_back(11);
	v.push_back(15);

	v = twoSum(v,9);
	cout<<v[0]<<" "<<v[1]<<endl;

    return 0;
}