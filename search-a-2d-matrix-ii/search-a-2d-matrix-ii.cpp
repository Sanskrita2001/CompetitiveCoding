class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0;
        int j=n-1;
        cout<<j;
        while(i<m && j>=0){
            cout<<i<<j<<" ";
            cout<<matrix[i][j];
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
                i++;
            else{
                j--;
                if(j<0)
                    return false;
            }
                
        }
        return false;
    }
};