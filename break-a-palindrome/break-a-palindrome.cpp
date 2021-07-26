class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.length()==1)
            return "";
        int count=0;
        for(int i=0;i<palindrome.length();i++){
            if(palindrome[i]=='a')
                 count++;
        }
        if(count==palindrome.length()-1){
            palindrome.replace(palindrome.length()-1,1,"b");
            return palindrome;
        }
        count=0;
        for(int i=0;i<palindrome.length();i++){
            if(palindrome[i]=='a'){
                 count++;
                 continue;
            }   
            else{
                palindrome.replace(i,1,"a");
                break;
            }
                
        }
        if(count==palindrome.length())
            palindrome.replace(palindrome.length()-1,1,"b");
        return palindrome;
    }
};