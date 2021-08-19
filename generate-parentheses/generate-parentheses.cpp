class Solution {
public:
    void parenthesis(vector<string>& v,string s,int n,int i,int opencount,int closecount){
        if(i==2*n){
            v.push_back(s);
            return ;
        }
        if(opencount<n)
        parenthesis(v,s+'(',n,i+1,opencount+1,closecount); 
        if(closecount<opencount)
        parenthesis(v,s+')',n,i+1,opencount,closecount+1); 
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s;
        parenthesis(v,"",n,0,0,0);
        for(auto i:v)
            cout<<i;
        return v;
    }
};