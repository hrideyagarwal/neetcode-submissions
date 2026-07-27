class Solution {
public:

void dfs(vector<vector<int>>& heights , vector<vector<bool>>& visited , int r , int c , int prev){
    if(r<0 || r>=heights.size() || c<0 || c>=heights[0].size()|| visited[r][c] || heights[r][c]< prev)
    return ;
    visited[r][c]= true;
    int dr[] = { 1 , -1 , 0 , 0};
int dc[]= {0 , 0 , 1 , -1 };
    for(int i=0;i<4;i++){
        int nr = r + dr[i];
        int nc = c + dc[i];
            dfs(heights , visited , nr , nc , heights[r][c]);

    }

}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> result ;
        vector<vector<bool>> pacific(n , vector<bool>(m , false));
                vector<vector<bool>> atlantic(n , vector<bool>(m , false));
                for(int r=0;r<n;r++){
                    dfs(heights , pacific , r , 0 , INT_MIN);
                                        dfs(heights , atlantic , r , m-1 , INT_MIN);


                }
                for(int c=0;c<m;c++){
                    dfs(heights , pacific , 0 , c , INT_MIN);
                                        dfs(heights , atlantic , n-1 , c , INT_MIN);


                }
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        if(atlantic[i][j]&& pacific[i][j]){
                            result.push_back({i,j});
                        }
                    }
                }
                return result;

    }
};
