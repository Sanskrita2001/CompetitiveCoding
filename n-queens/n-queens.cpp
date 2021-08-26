class Solution {
public:
    vector<vector<string>> ans;
    bool canPlace(vector<string> &board,int x,int y,int n){
        for(int i=0;i<x;i++){
            if(board[i][y]=='Q')
                return false;
        }
        int i=x;
        int j=y;
        while(i>=0 && j>=0)
            if(board[i--][j--]=='Q')
                return false;
        i=x;
        j=y;
        while(i>=0 && j<=n)
            if(board[i--][j++]=='Q')
                return false;
        return true;
    }
    void solve(vector<string> &board,int i,int n){
        if(i==n){
            for(auto x:board)
            cout<<x;
            ans.push_back(board);
            return;
        }
        for(int j=0;j<n;j++){
            if(canPlace(board,i,j,n)){
                board[i][j]='Q';
                solve(board,i+1,n);
                board[i][j]='.';
            } 
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board;
        string temp(n,'.');
        for(int i=0;i<n;i++)
            board.push_back(temp);
        for(auto x:board)
            cout<<x;
        solve(board,0,n);
        
        return ans;
    }
};