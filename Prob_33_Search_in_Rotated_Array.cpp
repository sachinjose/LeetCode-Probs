#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int search(vector<int>& v, int target) {
    int s = 0;
    int e = v.size() - 1;
    int mid = (s+e)/2;

    while(s<=e){
		mid = s + (e-s)/2;

    	if(v[mid]>v[mid+1]){
    		return mid+1;
    	}

    	else {
            if(v[mid]>=v[s]){

    		if((target >= v[s]) && (target<v[mid])){
    			e = mid - 1;
    		}
    		else{
    			s = mid + 1;
    		}

    	}
    	
    	else{

    		if((target<=v[e]) && (target>v[mid])){
    			s = mid+1;
    		}
    		else{
    			e = mid - 1;
    		}

    	}

    }
}

    return mid + 1;
}


int main(){

	vector<int> num;
	num.push_back(4);
	num.push_back(5);
	num.push_back(6);
	num.push_back(7);
	num.push_back(8);
	num.push_back(1);
	num.push_back(2);
	num.push_back(3);

	cout<<search(num,8)<<endl;

	return 0;
}