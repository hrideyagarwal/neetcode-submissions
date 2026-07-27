class Solution {
public:
void dfs(vector<vector<char>>& board  , int r , int c){
    if(r <0 || r>=board.size()|| c<0 || c>=board[0].size())return ;
if(board[r][c]!='O') return ;

board[r][c]='#';
int dr[]={ 1 , -1 , 0 , 0};
int dc[]={0 , 0 , 1 , -1};
for(int i=0;i<4;i++){
    int nr = r+ dr[i];
    int nc=c+dc[i];
dfs(board , nr , nc);
}


}
    void solve(vector<vector<char>>& board) {
        int row = board.size();
        int col=board[0].size();
        for(int i=0;i<col;i++){
           
if ( board [0][i]== 'O') dfs(board , 0,i );
if(board [row-1][i]=='O')dfs(board , row-1,i );
            
        }
        for(int j=0;j<row;j++){
           
                if(board[j][0]=='O') dfs(board , j , 0);
                if(board[j][col-1]=='O') dfs( board , j , col-1);
            
        }
        for( int i =0 ; i<row ;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]== 'O')board[i][j]= 'X';
                if(board[i][j]== '#')board[i][j]= 'O';
                  
            }
        }
        

    }
};
