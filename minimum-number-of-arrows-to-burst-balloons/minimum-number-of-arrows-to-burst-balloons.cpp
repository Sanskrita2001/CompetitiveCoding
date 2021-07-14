class Solution {
public:
    static bool sortcol( const vector<int>& v1,const vector<int>& v2 ) {
    return v1[1] < v2[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(),sortcol);
        int n = points.size();
        int count=1;
        int arrow = points[0][1];
        for(int i=1;i<n;i++){
            if(arrow<points[i][0]){
                count++;
                arrow=points[i][1];
            }
        }
        return count;
    }
};