class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0;
        int e=letters.size()-1;
        if(target>=letters[e])
            return letters[0];
        while(s<=e){
            int m=(s+e)/2;
            // if(letters[m]==target)
            //     return letters[m+1];
            if(letters[m]<=target)
                s=m+1;
            else
                e=m-1;
        }
        return letters[s];
    }
};