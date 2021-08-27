class Solution {
public:
    int firstMissingPositive(vector<int>& A) {
      sort(A.begin(),A.end());
    int i;
    set<int> s;
    for(int x:A)
        s.insert(x);
    int count=0;
    int f=0;
    for(i=0;i<s.size();i++){
        count++;
        if(s.find(i+1)==s.end()){
             f=1;  
             break;
        }
         
    }
    if(f==1)
        return i+1;
    if(count == s.size())
        return i+1;  
    return -1;
    }
    
};