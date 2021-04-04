class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=0;i<numRows;i++)
        {
            vector<int> v1;
            v1.push_back(1);
            for(int j=0;j<i-1;j++)
            {
                v1.push_back(res[i-1][j]+res[i-1][j+1]);    
            }
            if(i>=1)
                v1.push_back(1);
            res.push_back(v1);
        }
        return res;
    }
};