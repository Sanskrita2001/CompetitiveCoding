class Solution {
public:
    vector<vector<int>> generateMatrix(int A) {
        int up=0;
        int left=0;
        int right=A-1;
        int down=A-1;
        vector<vector<int>> res(A, vector<int>(A));
        int val=1;
        while(up<=down && left<=right){
        for(int i=left;i<=right;i++)
            res[up][i]=val++;
        for(int i=up+1;i<=down;i++)
            res[i][right]=val++;
        if(up!=down){
            for(int i=right-1;i>=left;i--)
                res[down][i]=val++;
        }
        if(left!=right){
            for(int i=down-1;i>up;i--)
                res[i][left]=val++;
        }
        up++;
        left++;
        right--;
        down--;
    }
        return res;    
    }
};