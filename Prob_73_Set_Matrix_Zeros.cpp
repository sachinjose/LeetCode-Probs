#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void setzero_col(vector<vector<int> >& matrix, int k){
	int n = matrix.size();
	for (int i = 0; i < n; i++){
		matrix[i][k] = 0;
	}
}

void setzero_row(vector<vector<int> >& matrix, int k){
	int n = matrix[0].size();
	for (int i = 0; i < n; i++){
		matrix[k][i] = 0;
	}

}

void setZeroes(vector<vector<int> >& matrix) {

	vector<int> rows;
	vector<int> columns; 

	int m = matrix.size();
	int n = matrix[0].size();

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if(matrix[i][j]==0){
				rows.push_back(i);
				columns.push_back(j);
			}
		}
	}

	for (int i = 0; i < columns.size(); i++){
		setzero_col(matrix, columns[i]);
	}

	for (int i = 0; i < rows.size(); i++){
		setzero_row(matrix,rows[i]);
	}

}

void setZeroes_2(vector<vector<int> >& matrix) {

	int m = matrix.size();
	int n = matrix[0].size();

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if(matrix[i][j]== 0){
				matrix[0][j] = 0;
				matrix[i][0] = 0;
			}
		}
	}

	for (int i = 0; i < n; i++){
		if(matrix[0][i]==0){
			setzero_col(matrix,i);
		}

	}

	for (int i = 0; i < m; i++){
		if(matrix[0][i]==0){
			setzero_row(matrix,i);
		}
	}

}

int main(){

	vector<vector<int> > matrix;

	vector<int> a;
	a.push_back(1);
	a.push_back(1);
	a.push_back(1);

	vector<int> b;
	b.push_back(1);
	b.push_back(0);
	b.push_back(1);


	vector<int> c;
	c.push_back(1);
	c.push_back(1);
	c.push_back(1);


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

	setZeroes_2(matrix);
	cout<<endl;

	for (int i = 0; i < matrix.size(); ++i)
	{
		for (int j = 0; j < a.size(); ++j)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;
	cout<<endl;

	vector<vector<int> > matrix2;

	vector<int> a2;
	a2.push_back(0);
	a2.push_back(1);
	a2.push_back(2);
	a2.push_back(0);

	vector<int> b2;
	b2.push_back(3);
	b2.push_back(4);
	b2.push_back(5);
	b2.push_back(2);

	vector<int> c2;
	c2.push_back(1);
	c2.push_back(3);
	c2.push_back(1);
	c2.push_back(5);

	matrix2.push_back(a2);
	matrix2.push_back(b2);
	matrix2.push_back(c2);

	for (int i = 0; i < matrix2.size(); ++i)
	{
		for (int j = 0; j < a2.size(); ++j)
		{
			cout<<matrix2[i][j]<<" ";
		}
		cout<<endl;
	}

	setZeroes_2(matrix2);
	cout<<endl;

	for (int i = 0; i < matrix2.size(); ++i)
	{
		for (int j = 0; j < a2.size(); ++j)
		{
			cout<<matrix2[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;

    return 0;
}