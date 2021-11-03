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
    int sumNumbers(TreeNode* root,int num=0) {
        if(root==NULL)
            return 0;
        num = num*10+root->val;
        if(root->left==NULL and root->right==NULL)
            return num;
        return sumNumbers(root->right,num) + sumNumbers(root->left,num);
    }
};