#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void rotate(vector<vector<int> >& matrix) {
    int n = matrix[0].size();
    for(int i = 0; i<(n+1)/2; i++){
        for(int j=0; j<n/2; j++){
           int tmp = matrix[i][j];
            matrix[i][j] = matrix[n-1-j][i];
            matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
            matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
            matrix[j][n-1-i] = tmp;
            
        }
    }
}

int main(){

	vector<vector<int> > matrix;

	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);

	vector<int> b;
	b.push_back(4);
	b.push_back(5);
	b.push_back(6);

	vector<int> c;
	c.push_back(7);
	c.push_back(8);
	c.push_back(9);

	matrix.push_back(a);
	matrix.push_back(b);
	matrix.push_back(c);

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}

	rotate(matrix);
	cout<<endl;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}

    return 0;
}