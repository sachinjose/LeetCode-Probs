#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
	int ele = nums[0];
	int count = 1;

	for (int i = 1; i < nums.size(); i++){
		if(nums[i]!=ele){
			count--;
			if(count==0){
				ele = nums[i];
				count = 1;
			}
		}
		else{
			count++;
		}
	}

	return ele;
    
}

int main(){

	vector<int> v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(1);

	cout<<majorityElement(v);

	return 0;
}