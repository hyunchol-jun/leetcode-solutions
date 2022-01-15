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
    vector<int> inorderTraversal(TreeNode* root) {
       
        vector<int> result {};
        if (!root)
        {
            return result;
        }
        result = inorderTraversal(root->left);
        result.push_back(root->val);
        vector<int> rightResult = inorderTraversal(root->right);
        result.insert(result.end(), rightResult.begin(), rightResult.end());
        return result;
    }
};