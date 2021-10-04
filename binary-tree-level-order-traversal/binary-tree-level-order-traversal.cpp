/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        if(!root)
            return res;
        q.push(root);
        while(!q.empty()){
            queue<TreeNode*> temp;
            vector<int> ans;
            while(!q.empty()){
                TreeNode* n=q.front();
                ans.push_back(n->val);
                q.pop();
                if(n->left)
                    temp.push(n->left);
                if(n->right)
                    temp.push(n->right);
            }
            q=temp;
            res.push_back(ans);
        }
        return res;
    }
};