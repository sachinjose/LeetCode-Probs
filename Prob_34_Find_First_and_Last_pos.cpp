#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
	vector<int> v;
	v.push_back(-1);
	v.push_back(-1);
	int s = 0;
	int e = nums.size()-1;
	if(e<0){
		return v;
	}
	int mid = (s+e)/2;
	while(s<=e){
		mid = s + (e-s)/2;
		if(nums[mid]==target){
			int i = 0;
			int j = 0;

			for (i = mid; i >= 0; i--){
				if(nums[i]!=target){
					break;
				}
			}

			if(i==mid){
				v[0] = mid;
			}
			else{
				v[0] = i+1;
			}

			for (j = mid; j <= e; j++){
				if(nums[j]!=target){
					break;
				}
			}
			if(j==mid){
				v[1] = mid;
			}
			else{
				v[1] = j-1;
			}
			return v;
		}
		else if(nums[mid]>target){
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}

	}
 	
 	return v;   
}

int main(){

	vector<int> num;
	num.push_back(2);
	num.push_back(2);
	num.push_back(7);
	num.push_back(8);
	num.push_back(8);
	num.push_back(10);
	num.push_back(1);
	
	vector<int> range = searchRange(num,2);

	cout<<range[0]<<" "<<range[1]<<endl;

	return 0;
}
