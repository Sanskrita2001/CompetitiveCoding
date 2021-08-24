class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> result;
        int up=0,right=n-1,down=m-1,left=0;
        while(result.size()<m*n){
            //traverse from left to right
            for(int i=left;i<=right;i++)
                result.push_back(matrix[up][i]);
            //traverse from up to down
            for(int i=up+1;i<=down;i++)
                result.push_back(matrix[i][right]);
            if(up!=down){
                //traverse from right to left
                for(int i=right-1;i>=left;i--)
                    result.push_back(matrix[down][i]);
            }
            if(left!=right){
                //traverse from down to up
                for(int i=down-1;i>up;i--)
                    result.push_back(matrix[i][left]);
            }
            up++;
            left++;
            right--;
            down--;
        }
        return result;
    }
};