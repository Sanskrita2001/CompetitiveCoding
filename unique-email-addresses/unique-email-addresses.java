class Solution {
    public int numUniqueEmails(String[] emails) {
        String local="",domain="";
        HashSet<String> set=new HashSet();  
        for(String s : emails){
            local=s.split("@")[0];
            domain=s.split("@")[1];
            local = local.replace(".","");
            local = local.split("\\+")[0];
            set.add(local+'@'+domain);
            System.out.println(local);
        }
        
        return set.size();
    }
}