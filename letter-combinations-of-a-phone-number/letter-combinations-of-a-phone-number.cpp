class Solution {
public:
    string key[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    void generate(string digits,string output,int i){

        if(digits[i]=='\0'){
            cout<<output;
            ans.push_back(output);
            return;
        }
        int ele=digits[i]-'0';
        if(ele==0||ele==1)
            generate(digits,output,i+1);
        for(int idx=0;idx<key[ele].size();idx++){
            generate(digits,output+key[ele][idx],i+1);
            
        }
        return;    
    }
    vector<string> letterCombinations(string digits) {
        generate(digits,"",0);
        if(digits=="")
            return {};
        return ans;
    }
};