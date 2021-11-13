class Solution {
public:
    int helper(int n){
        int count=0;
        while(n){
            n&=n-1;
            count++;
        }
        cout<<count<<" ";
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> res;
        // res[0]=0;
        for(int i=0;i<=n;i++){  
            cout<<i;
            res.push_back(helper(i));
        }
        return res;
    }
};