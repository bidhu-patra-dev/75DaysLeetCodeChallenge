class Solution {
public:
    void bfs(vector<vector<char>> &grid, vector<vector<bool>> &vis, queue<pair<int,int>> &q){
        int n = grid.size();
        int m = grid[0].size();
        while(!q.empty()){
            pair<int,int> ele = q.front();
            int nrow = ele.first;
            int mcol = ele.second;
            q.pop();
            for(int row = -1;row<2;row++){
                for(int col = -1;col<2;col++){
                    if((row==0 and col==0) or (row==-1 and col==-1) or (row==-1 and col==1) or(row==1 and col==-1) or(row==1 and col==1)) continue;
                    int finalrow = nrow+row;
                    int finalcol = mcol+col;
                    if(finalrow<n and finalrow>=0 and finalcol<m and finalcol>=0 and vis[finalrow][finalcol]==0 and grid[finalrow][finalcol]=='1' ){
                        q.push({finalrow, finalcol});
                        vis[finalrow][finalcol]=1;
                        
                    }
                }
            }
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool> (m,0));
        queue<pair<int, int>> q;
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' and !vis[i][j]){
                    q.push({i,j});
                    vis[i][j]=1;
                    count++;
                    bfs(grid, vis, q);
                }
            }
        }
        return count;
    }
};