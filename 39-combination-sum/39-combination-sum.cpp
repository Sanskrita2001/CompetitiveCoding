class Solution {
public:
    vector<vector<int>> ans;
    vector<int> ds;
    void findCombination(int index,vector<int>& candidates,int target){
        int n=candidates.size();
        if(target==0){
            ans.push_back(ds);
            return;
        }    
        if(target<0)
            return;
        
        for(int i=index;i<n;i++){
            ds.push_back(candidates[i]);
            findCombination(i,candidates,target-candidates[i]);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        findCombination(0,candidates,target);
        return ans;
    }
};