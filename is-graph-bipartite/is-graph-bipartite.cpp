class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        int color=1;
        vector<int> col(n,-1);
        for(int node=0;node<n;node++){
            if(col[node]!=-1)
                continue;
            col[node]=color;
            queue<pair<int,int>> q;
            q.push({node,color});
            
            while(!q.empty()){
                int curr=q.front().first;
                int currcol=q.front().second;
                q.pop();
                for(auto it:graph[curr]){
                    if(col[it]==-1){
                        q.push({it,!currcol});
                        col[it]=!currcol;
                    }else if(col[it]==currcol){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};