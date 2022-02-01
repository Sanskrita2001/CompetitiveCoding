class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //For row check
        for(int i=0;i<n;i++){
            unordered_set<int> row;
            for(int j=0;j<n;j++){
                if(matrix[i][j]>=1 && matrix[i][j]<=n)
                    row.insert(matrix[i][j]);
            }
            if(row.size()!=n)
                return false;
        }
        
        //For col check
        for(int i=0;i<n;i++){
            unordered_set<int> col;
            for(int j=0;j<n;j++){
                if(matrix[j][i]>=1 && matrix[j][i]<=n)
                    col.insert(matrix[j][i]);
            }
            if(col.size()!=n)
                return false;
        }
                                
        return true;
    }
};