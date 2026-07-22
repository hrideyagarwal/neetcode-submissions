class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int freshfruits=0;
        int minutes =0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                q.push({i,j});}
            
            else if(grid[i][j]==1) {
                freshfruits++;
            }
            }
        }
          if(freshfruits==0) return 0;
        if(q.empty()) return -1;
      
        while(!q.empty()){
            int qs=q.size();
            while(qs--){
auto[r,c]=q.front();
q.pop();
int dr[] = {-1,1, 0, 0}; int  dc[] = {0, 0, -1, 1};
for (int i = 0; i < 4; i++) {
    int nr = r + dr[i];   // new row after moving in direction i
    int nc = c + dc[i];   // new col after moving in direction i
    
    if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] == 1) {
        grid[nr][nc] = 2;
        q.push({nr, nc});
        freshfruits--;
    }
}

            }
minutes++;

        }
        return freshfruits==0? minutes -1 : -1;
    }
};
