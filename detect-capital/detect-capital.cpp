class Solution {
public:
    bool detectCapitalUse(string word) {
        int count1=0,count2=0;
        int n=word.length();
        for(int i=0;i<n;i++){
            if(isupper(word[i]))
                count1++;  
            if(islower(word[i]))
                count2++;
        }
        if(count1==n)
            return true;
        if(count2==n)
            return true;
        if(isupper(word[0]) && count2==n-1)
            return true;
        return false;
    }
};