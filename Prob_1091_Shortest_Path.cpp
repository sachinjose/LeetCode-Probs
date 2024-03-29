#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

struct cell{
	int x;
	int y;
	int distance;
};    
int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    if(grid[0][0]==1){
        return -1;
    }
    int n = grid.size();
    int dx[8] = {-1,0,1,-1,1,-1,0,1};
    int dy[8] = {-1,-1,-1,0,0,1,1,1};
    vector<vector<bool> > visited(n,vector<bool>(n,false));
    queue<cell>q;
    q.push({0,0,1});
    visited[0][0]=true;
    while(!q.empty()){
    	cell t = q.front();
    	q.pop();
    	if(t.x == n-1 && t.y == n-1){
    		return t.distance;
    	}
    	for (int i = 0; i < 8; ++i){
    		int x = t.x + dx[i];
    		int y = t.y + dy[i];
    		if(x>=0 && x<n && y>=0 && y<n && grid[x][y]==0 && !visited[x][y]){
    			q.push({x,y,t.distance+1});
    			visited[x][y]=true;
    		}
    	}
    }
    return -1;
}

int main(){


    return 0;
}