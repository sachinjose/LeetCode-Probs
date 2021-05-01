#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

bool searchMatrix(vector<vector<int> >& matrix, int target) {
   
	int m = matrix.size();
	if(m==0){
		return false;
	}
	int n = matrix[0].size();

	int s = 0;
	int e = m*n-1;
	int mid;
	int pivot;

	while(s<=e){

		mid = s+ (e-s)/2;
		int r = mid/n;
		int c = mid%n;

		pivot = matrix[r][c];        

		if(pivot == target){
			return true;
		}

		if(pivot > target){
			e = mid - 1;
		}

		if(pivot < target){
			s = mid + 1;
		}

	}

	return false;
}

int main(){

	vector<vector<int> > matrix;

	vector<int> a;
	a.push_back(1);
	// a.push_back(3);
	// a.push_back(5);
	// a.push_back(7);

	// vector<int> b;
	// b.push_back(10);
	// b.push_back(11);
	// b.push_back(16);
	// b.push_back(20);


	// vector<int> c;
	// c.push_back(23);
	// c.push_back(30);
	// c.push_back(34);
	// c.push_back(60);


	matrix.push_back(a);
	// matrix.push_back(b);
	// matrix.push_back(c);

	// for (int i = 0; i < matrix.size(); ++i)
	// {
	// 	for (int j = 0; j < a.size(); ++j)
	// 	{
	// 		cout<<matrix[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	cout<<searchMatrix(matrix,0)<<endl;
	// cout<<searchMatrix(matrix,13)<<endl;

	// cout<<endl;


    return 0;
}