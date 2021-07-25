class Solution {
public:
    static bool lexicographic(string &a,string &b){
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        string s;
        vector<string> str;
        for(int i:nums){
            str.push_back(to_string(i));
        }
        sort(str.begin(),str.end(),lexicographic);
        string ans;
        for(auto i:str){
            ans+=i;
        }
        if(ans[0]=='0'){
            ans="0";
        }
        return ans;
    }
};