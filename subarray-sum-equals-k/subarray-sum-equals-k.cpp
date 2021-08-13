class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int cs=0,count=0;
        unordered_map<int,int> csum;
        
        for(int i=0;i<nums.size();i++){
            cs+=nums[i];         
            if(cs==k)
                count++;
            if(csum.find(cs-k) != csum.end()){
                count+=csum[cs-k];   
                cout<<csum[cs-k]<<" ";
            }     
           csum[cs]++; 
        }    
        return count;
    }
};