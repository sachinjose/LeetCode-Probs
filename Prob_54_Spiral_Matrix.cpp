#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

vector <int> spiralOrder(vector<vector<int> >& matrix){

	int m = matrix.size();
	int n = matrix[0].size();
	vector <int> ans;
	int cap = m*n;
	
	if((m==0)||(n==0)){
		return ans;
	}

	int sr = 0, sc = 0, er = m-1, ec = n-1;

	int count = 0;

	 while((sr <= er) && (sc <=ec)){

		for (int i = sc; i <= ec; i++){		
			ans.push_back(matrix[sr][i]);
			count++;
		}
		sr++;
		if(count == m*n){
			return ans;
		}

		for (int i = sr; i <=er; i++){
			ans.push_back(matrix[i][ec]);
			count++;
		}
		ec--;
		if(count == m*n){
			return ans;
		}

		for (int i = ec; i >= sc; i--){
			ans.push_back(matrix[er][i]);
			count++;
		}
		er--;
		if(count == m*n){
			return ans;
		}

		for (int i = er; i >= sr; i--){
			ans.push_back(matrix[i][sc]);
			count++;
		}

		sc++;

		if(count == m*n){
			return ans;
		}
	 }

	return ans;
}

int main(){

	vector<vector<int> > matrix;

	vector<int> a;
	a.push_back(7);

	// a.push_back(4);

	vector<int> b;
	b.push_back(9);
	// b.push_back(6);
	// b.push_back(7);
	// b.push_back(8);

	vector<int> c;
	c.push_back(6);
	// c.push_back(10);
	// c.push_back(11);
	// c.push_back(12);

	matrix.push_back(a);
	matrix.push_back(b);
	matrix.push_back(c);

	for (int i = 0; i < matrix.size(); ++i)
	{
		for (int j = 0; j < a.size(); ++j)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}

 	vector<int> d = spiralOrder(matrix);
	
	for (int i = 0; i < d.size(); i++)
	{
		cout<<d[i]<<" ";
	}

	cout<<endl;

    return 0;
}