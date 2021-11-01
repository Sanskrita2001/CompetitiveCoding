class Solution {
public:
    void dfs(vector<vector<char>>& board, int x,int y, char c){
        int m=board.size();
        int n=board[0].size();
        if(x<0||x>=m||y<0||y>=n||board[x][y]!='O')
            return;
        board[x][y]=c;
        dfs(board,x+1,y,'1');
        dfs(board,x-1,y,'1');
        dfs(board,x,y+1,'1');
        dfs(board,x,y-1,'1');
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        //Converting all border 'O's to '1's 
        for(int i=0;i<m;i++){
            if(board[i][0]=='O')
                dfs(board,i,0,'1');
            if(board[i][n-1]=='O')
                dfs(board,i,n-1,'1');
        }
        for(int i=0;i<n;i++){
            if(board[0][i]=='O')
                dfs(board,0,i,'1');
            if(board[m-1][i]=='O')
                dfs(board,m-1,i,'1');
        }
        //Converting rest 'O's to 'X's
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O')
                    board[i][j]='X';
                if(board[i][j]=='1')
                    board[i][j]='O';
            }
        }
    }
};