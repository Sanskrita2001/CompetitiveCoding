class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        stack<int> s;
        unordered_map<int,int> m;
        for(auto x : nums2){
            while(!s.empty() && s.top()<x){
                m[s.top()]=x;
                s.pop();
            }
            s.push(x);
        }
        for(auto x : nums1)
            res.push_back(m[x]?m[x]:-1);
        return res;
    }
};