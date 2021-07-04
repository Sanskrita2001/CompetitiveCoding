class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int longest=0;
        for(int i=0;i<n;i++){
            if(s.find(nums[i]-1) == s.end()){
                int head=nums[i];
                int count =1;
                while(s.find(head+1) != s.end()){
                    head++;
                    count++;
                }
                longest=max(longest,count);
            }
        }
        return longest;
    }
};