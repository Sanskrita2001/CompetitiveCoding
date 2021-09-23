class Solution {
public:
    int minInsertions(string s) {
        stack<char> stk;
        int open=0,close=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                stk.push(s[i]);
            else if(s[i]==')'){
                if(s[i+1]==')'){
                    if(!stk.empty())
                        stk.pop();
                    else{
                        open++;
                    }
                    i++;
                }
                else{
                    if(stk.empty()){
                        open++;
                        close++;
                    }
                    else{
                        close++;
                        stk.pop();
                    }
                }
            }
        }
        return stk.size()*2+open+close;
    }
};