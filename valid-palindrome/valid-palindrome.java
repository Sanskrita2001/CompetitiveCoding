class Solution {
    boolean palindromeCheck(String res,int i,int n){
        if(i>=n)
            return true;
        return (res.charAt(i)==res.charAt(n)) && palindromeCheck(res,i+1,n-1);
    }
    public boolean isPalindrome(String s) {
        s=s.toLowerCase();
        String res="";
        for(int i=0;i<s.length();i++){
            if(Character.isLetterOrDigit(s.charAt(i)))
                res+=s.charAt(i);
        }
        System.out.println(res);
        return palindromeCheck(res,0,res.length()-1);
    }
}