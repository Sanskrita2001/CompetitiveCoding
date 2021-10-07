class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int index){
        int m = board.size();
        int n = board[0].size();
        if(index==word.size())
            return true;
        if(i<0||j<0||i>=m||j>=n)
            return false;
        if(board[i][j] != word[index])
            return false;
        board[i][j]='0';
        if(dfs(board,word,i+1,j,index+1)||dfs(board,word,i-1,j,index+1)||dfs(board,word,i,j+1,index+1)||dfs(board,word,i,j-1,index+1))
            return true;
        board[i][j]=word[index];
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        if(word=="")
            return false;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && dfs(board,word,i,j,0))
                    return true;
            }
        }
        
        return false;
    }
};