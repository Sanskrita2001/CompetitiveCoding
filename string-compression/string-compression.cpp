class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j=0;
        string ans;
        while(i < chars.size() && j < chars.size())
        {
            if(chars[i] == chars[j])
                j++;
            else
            {
                ans += chars[i];
                if(j - i != 1)
                    ans += to_string(j - i);
                i = j;
            }
        }
        ans += chars[i];
        if(j - i  != 1)
            ans += to_string(j - i);
        
        chars.clear();
        for(int i = 0; i < ans.length(); i++)
        {
            chars.push_back(ans[i]);
        }
        return ans.size();
    }
};