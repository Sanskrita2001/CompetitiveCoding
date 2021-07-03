class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& arr) {
//         vector<vector<int>> res;
//         //sorting
//         sort(nums.begin(), nums.end());
//         int n=nums.size();
//         if(n<=3000){
//             for(int i=0;i<=(n-3);i++)
//         {
//             if(i > 0 && nums[i] == nums[i-1])
//                 continue;
//             int j=i+1;
//             int k=n-1;
//             while(j<k){
//                 int pair=nums[j]+nums[k];
//             if(pair == -nums[i])
//             {
//                 res.push_back({nums[i],nums[j],nums[k]});
//                 j++;
//                 k--;
//             }
//             else if(pair>-nums[i])
//                 k=k-1;
//             else
//                 j=j+1;
//             } 
//         }
//         for (int i = 0; i < res.size(); ++i) {
//             sort(res.begin(), res.end());
//   res.erase(unique(res.begin(), res.end()), res.end());
// }
//         return res;
//     } 
//        return res;
               int n = arr.size();

        if(n < 3)
            return {};
        vector<vector<int>> res; 
        sort(arr.begin() , arr.end());
        
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && arr[i] == arr[i-1])
                continue;
            
            int j = i+1, k = n-1;
            
            while(j < k)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum < 0)
                    j++;
                else if(sum > 0)
                    k--;
                else
                {
                    res.push_back({arr[i] , arr[j] , arr[k]});
                    
                    while(j < k && arr[j] == arr[j+1]) j++;
                    while(j < k && arr[k] == arr[k-1]) k--;
                    j++;
                    k--;
                }
            }
                
        }
        return res;
       
}
        
};