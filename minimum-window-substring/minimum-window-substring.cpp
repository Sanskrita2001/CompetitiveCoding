class Solution {
public:
    string minWindow(string s, string p) {
       unordered_map <char,int> FS{0};
       unordered_map <char,int> FP{0};
       for(int i=0;i<p.size();i++){
               FP[p[i]]++;
       } 
       int count=0;
        int start=0;
        int start_idx=-1;
        int window_size=0;
        int min_window = INT_MAX;
       for(int i=0;i<s.size();i++){
           char ch = s[i];
           FS[ch]++; 
           //Count how many nos are matched
           if(FP[ch]!=0 && FS[ch]<=FP[ch])
               count++;
           cout<<count;
           if(count==p.length()){
               while(FP[s[start]]==0 || FS[s[start]]>FP[s[start]]){
                   FS[s[start]]--;
                   start++;
               }
               window_size=i-start+1;
               if(min_window>window_size){
                   min_window=window_size;
                   start_idx=start;
               }
           }
       }
        
       if(start_idx==-1)
           return "";
        else
            return s.substr(start_idx,min_window);
    }
};