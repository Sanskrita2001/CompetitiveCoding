class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row_check( 9 , vector<int> (9, 0));
        vector<vector<int>> col_check( 9 , vector<int> (9, 0));
        vector<vector<int>> box_check( 9 , vector<int> (9, 0));
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                char c = board[i][j];
                if(c == '.')
                    continue;
                int n = c-'1';
                if(row_check[i][n])
                    return false;
                row_check[i][n]=true;
                if(col_check[j][n])
                    return false;
                col_check[j][n]=true;
                int k = 3*(i / 3) + j / 3;
                if(box_check[k][n])
                    return false;
                box_check[k][n] = true;
            }
        }
        return true;
    }
};