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
    TreeNode* buildHelper(int preStart, int preEnd, int inStart, int inEnd,
                          vector<int>& preorder, vector<int>& inorder, unordered_map<int, int>& node_map) {
        if (preStart > preEnd || inStart > inEnd) {
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[preStart]);
        int index = node_map[root->val];
        root->left = buildHelper(preStart + 1, preEnd, inStart, index - 1, preorder, inorder, node_map);
        root->right = buildHelper(preStart + index - inStart + 1, preEnd, index + 1, inEnd, preorder, inorder, node_map);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> node_map;
        for (int i = 0; i < inorder.size(); i++) {
            node_map[inorder[i]] = i;
        }
        return buildHelper(0, preorder.size() - 1, 0, inorder.size() - 1, preorder, inorder, node_map);
    } 
};