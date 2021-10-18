class Solution {
public:
    vector<string> res;
    void solve(int i, int n,string s,string curr){
        if(i==n){
            res.push_back(curr);
            return;  
        }
        if(isdigit(s[i])){
            solve(i+1,n,s,curr+s[i]);
        }    
        else{
            char chl=tolower(s[i]);
            char chu=toupper(s[i]);
            solve(i+1,n,s,curr+chl);
            solve(i+1,n,s,curr+chu);
        }
    }
    vector<string> letterCasePermutation(string s) {
        solve(0,s.length(),s,"");
        return res;
    }
};