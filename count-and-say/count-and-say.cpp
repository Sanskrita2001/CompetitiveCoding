class Solution {
public:
    string s="";
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string say=countAndSay(n-1);
        string res="";
        int i=0;
        while(i<say.size()){
            int count=0;
            char curr=say[i];
            while(i<say.size()&&curr==say[i]){
                count++;
                i++;
            }
            char ch_cnt='0'+count;
            res+=ch_cnt+string(1,curr);
        }
        return res;
    }
};