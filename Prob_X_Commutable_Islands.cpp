void makeSet(int N, int parent[]){
	for (int i = 1; i <=N ; i++){
		parent[i] = i;
	}
}
int find(int i,int parent[]){
	while(parent[i]!=i){
		i = parent[i]
	}
	return i;
}

bool cmp(vector<int> A,vector<int> B){
	return A[2]<B[2];
}

int Solution::solve(int A, vector<vector<int> > &B) {
	sort(B.begin(),B.end());
	int parent[A+1];
	makeSet(A, parent);
	int cost = 0;
	for (int i = 0; i < B.size(); i++){
		int s = B[i][0];
		int d = B[i][1];
		int rS = find(s,parent);
		int rD = find(d,parent);
		if(rs!=rD){
			cost+=B[1][2];
			parent[rS]=rD;
		}
	}
	return cost;
}
