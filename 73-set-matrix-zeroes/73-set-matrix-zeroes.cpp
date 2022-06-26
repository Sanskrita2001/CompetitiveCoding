class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rs;
        set<int> cs;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    rs.insert(i);
                    cs.insert(j);
                }
            }
        }
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(rs.find(i)!=rs.end() || cs.find(j)!=cs.end()){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};