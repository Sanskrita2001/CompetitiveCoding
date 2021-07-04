class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        //sorting
        sort(nums.begin(), nums.end());
        int n=nums.size();
            for(int i=0;i<=(n-3);i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int pair=nums[j]+nums[k];
            if(pair == -nums[i])
            {
                res.insert({nums[i],nums[j],nums[k]});
                
                // while(j < k && nums[j] == nums[j+1]) j++;
                // while(j < k && nums[k] == nums[k-1]) k--;
                    j++;
                    k--;
            }
            else if(pair>-nums[i])
                k=k-1;
            else
                j=j+1;
            } 
        }
 vector<vector<int>>solve(res.begin(),res.end());
   return solve;
       return solve;

        }     
};