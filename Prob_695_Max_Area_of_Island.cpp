#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int dfs(vector<vector<int>>& grid,int i, int j,vector<vector<bool> > &visited){
    if(i < 0 || j < 0 || i>=grid.size() || j>=grid[0].size()){
        return 0;
    }
    if(grid[i][j] == 0){
        return 0;
    }
    if(visited[i][j] == true){
        return 0;
    }
    visited[i][j] = true;
    return 1 + dfs(grid,i-1,j,visited) + dfs(grid,i,j-1,visited) +  dfs(grid,i,j+1,visited) + dfs(grid,i+1,j,visited);
}

int maxAreaOfIsland(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<bool> > visited(m,vector<bool>(n,false));

    int count = 0;

    for (int i = 0; i < m; i++){
        for (int j = 0; j <n ; j++){
            if(grid[i][j] == 1 && visited[i][j] == false){
                count = max(count,dfs(grid,i,j,visited));
            }
        }
    }

    return count;
}


int main(){


    return 0;
}