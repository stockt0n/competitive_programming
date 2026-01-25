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
    void traverse(TreeNode* root, vector<int>& result) {
        if (!root) return;

        traverse(root->left, result);  // 1. Go Left
        result.push_back(root->val); // 2. Visit Root
        traverse(root->right, result); // 3. Go Right
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }
};