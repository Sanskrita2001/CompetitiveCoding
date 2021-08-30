class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0)
            return m*n;
        int x=INT_MAX;
        int y=INT_MAX;
        for(int i=0;i<ops.size();i++){
            x=min(ops[i][0],x);
            y=min(ops[i][1],y);
        }
        return x*y;    
    }
};