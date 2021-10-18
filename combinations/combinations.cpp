class Solution {
public:
    vector<vector<int>> res;
    void solve(int index, vector<int> ans,int n,int k){
        if(ans.size()==k){
            res.push_back(ans);
            return;
        }
        for(int i=index;i<=n;i++){
            ans.push_back(i);
            solve(i+1,ans,n,k);
            ans.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> ans;
        solve(1,ans,n,k);
        return res;
    }
};