class Solution {
public:
struct cell{
	int x;
	int y;
	int minute;
};    
int orangesRotting(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int dx[8] = {0,-1,1,0};
    int dy[8] = {-1,0,0,1};

    vector<vector<bool> > visited(m,vector<bool>(n,false));
    queue<cell>q;

    for (int i = 0; i < m; i++){
    	for (int j = 0; j < n; j++){
    		if(grid[i][j] == 2){
    			visited[i][j] = true;
    			q.push({i,j,0});
    		}	
    	}
    }

    int time = 0;

    while(!q.empty()){

    	cell t = q.front();
    	q.pop();
    	time = max(time,t.minute);
    	for (int i = 0; i < 4; i++){
    		int x = t.x + dx[i];
    		int y = t.y + dy[i];
    		if(x>=0 && x<m && y>=0 && y<n && grid[x][y]==1 && !visited[x][y]){
    			visited[x][y] = true;
    			grid[x][y]=2;
    			q.push({x,y,t.minute+1});
    		}
    	}
    }

    for (int i = 0; i < m; i++){
    	for (int j = 0; j < n; j++){
    		if(grid[i][j] == 1){
  				return -1;
    		}	
    	}
    }
    
    return time;
}
};