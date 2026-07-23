class Solution {
public:
void bfs( vector<vector<int>>& grid, queue<pair<int,int>>& q , int n , int m){
    int dr[]={-1,1,0,0};
int dc[]={0,0,1,-1};

while(!q.empty()){
    int qsize=q.size();
    while(qsize--){
        auto [r,c] = q.front();
        q.pop();
        for(int i=0;i<4;i++){
        int nr= r+dr[i];
        int nc=c+dc[i];
        if(nr>=0 && nc>=0 && nr< n && nc< m && grid[nr][nc]==INT_MAX){
            grid[nr][nc]=grid[r][c]+1;
            q.push({nr,nc});

        }
        }
    }
}
}
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        bfs(grid , q , n , m );
        
    }
};
