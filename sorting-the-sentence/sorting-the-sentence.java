class Solution {
    public String sortSentence(String s) {
        String[] words = s.split(" ");
        String[] resArray = new String[words.length];
        String res="";
        for(String word : words){
            int n = word.length();
            int last = Character.getNumericValue(word.charAt(n-1));
            System.out.println(last);
            resArray[last-1] = word.substring(0,n-1);
        }
        for(String i:resArray){
            res+=i;
            res+=" ";
        }
        return res.substring(0,res.length()-1);
    }
}